#include "breaklines.h"
#include "clang.h"
#include "dbmalloc.h"


/*
utf32的breakline
 *注意:处理utf32编码集即编码范围0x0-0x7F FF FF FF
 */


/*
*func:找到N个字符的开始编码,n为正向后，为负则向前找
*str[IN] 输入字符串
*offset[IN]从字符str 的offset(字节)处开始
*n[IN] 往前还是往后从offset处开始查找到第n个字符的首字节编码
*返回:找到的偏移
*/

int
utf32_next_nchar(const char *str, int offset, int n)
{
	int inc;

	inc = n > 0 ? 1 : -1;

	for (n = (n > 0) ? n : -n; n > 0; n--) {
		offset += inc*4;
	}

	return offset-offset%4;
}

//一个长单词比如Wellcomhetrainstiest,规定宽度显示不下时，
//此函数可以将一个单词折断处理
//max_w[IN]为最大可输出宽度
//word[IN] 为字符串
//len[IN]为字符串字节长
//width[IN,OUT]返回折断后的显示宽度
//返回值:字符串折处偏移
static int
locate_word_to_fit(GR_GC_ID gc, GR_SIZE max_w,
					const char *word, size_t len, GR_SIZE* width)
{
	GR_SIZE w, h, b;
	int max = max_w;
	int low = 0, high = len, mid;

    while (low < high)
	{
		mid = (low + high) / 2;
		//找到编码的开始字节
		mid = mid-mid%4;

		NxGetGCTextSize(gc, (char*)word, mid, MWTF_UC32, &w, &h, &b);
		*width = w;

		if (w == max)//刚好达到最大宽度
			break;
        else if (w > max)//一半还是比最大宽度大，那继续一半
		{
			high = mid;
		}
		else if (w < max)//一半字符串总算没有达到最大宽度
		{
			int next = utf32_next_nchar(word, mid, 1);//找到下一个字符的首编码
			if (next >= high)
				break;

			NxGetGCTextSize(gc, (char*)word, next, MWTF_UC32, &w, &h, &b);
			if (w >= max)
			{
				if (w == max) {
					mid = next;
					*width = w;
				}
				break;
			}
			else
			{
				low = next;
			}
		}
	}

	return mid;
}

/*
*func:计算给定字符串text 在给定宽度内以自动断行的方式
*       能输出多少行，并返回每一行的指针
*gc[IN]:字符输出的系统环境
*width[IN]:给定宽度
*lang[IN]:文本本地化代码标志
*text[IN]:给定字符串
*len[IN]:给定字符串的字节长
*max_line[IN]:给定的最大可输出行数,即line_len的数组大小,防止越界,请注意不能小于2
*line_from[IN,OUT]:需要外部分配内存后传入，用于返回各行的字符串在  给定字符串text
				:中的索引,若为NULL，表示 不需要返回字节长度
*line_len[IN,OUT]:需要外部分配内存后传入，用于返回各行的字符串字节长度
                         :若为NULL，表示 不需要返回字节长度
*line_width[IN,OUT]:用于返回各行的字符串输出的实际宽度，
  需要外部分配提供，大小同line_len,如果为NULL，表示不需要返回宽度
*返回:能输出的行数,-1为出错

*常用用法:1 . 获取字符串能输出的行数
                             lines = utf32GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,NULL,NULL,NULL);
                       2 . 获取字符串能输出的行数及各行的信息(长度、位置)
                             int *line_from = malloc(100);
                             int *line_len = malloc(100);
                             lines = utf32GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,line_from,line_len,NULL);   
                             for(i=0;i<lines;i++)
                             	drawText(gc,pStr+line_from[i],line_len[i]); 
                             
*/
int
utf32GetTextExWordBreakLines(GR_GC_ID gc, GR_SIZE width,const char* lang,
		const char *text, size_t len, int max_line,int line_from[],int line_len[],int line_width[])
{
	GR_SIZE w, h, b;
	GR_SIZE last_w;//当前字符宽度超过给定宽度时,用于回退到上一次小于给定宽度时的宽度
	char *brks;//保存各字节能否break的信息
	int i;
	int line_start;//每行行首所在(相对于整个字符串)
	int last_word;//上一次字符串宽度小于给定宽度时的那个字符所在
	int line_count = 0;//可输出行数
	int word_locate;
	int wordcount = len/4;//字符个数
	const char *text_lang;
	
	NxGetGCTextSize(gc, text, len, MWTF_UC32, &w, &h, &b);
	if (w <= width) {//不够输出一行
		if(line_len){
			line_len[line_count] = len;
		}
		if(line_from){
			line_from[line_count] = 0;
		}
		
		if(line_width){
			line_width[line_count] = w;
		}
		line_count = 1;
		
		return line_count;
	}

	brks = app_malloc(wordcount);
	if (brks == NULL)
		return -1;

	text_lang = get_text_lang(UTF32LE, text, len);
	/* Show the breaking points */
    set_linebreaks_utf32(text, wordcount, text_lang, brks);

	line_start = 0;
	last_word = 0;
	for (i = 1; i <= wordcount; i++) {
		switch (brks[i-1]) {
		case LINEBREAK_MUSTBREAK:
		case LINEBREAK_ALLOWBREAK:
			NxGetGCTextSize(gc, text + 4*line_start, 4*(i - line_start), MWTF_UC32, &w, &h, &b);
			if (w > width) {
				if (last_word > line_start) {
					if (w - last_w > width) {
						int partial_len;
						GR_SIZE partial_w;
						partial_len = locate_word_to_fit(gc, width - last_w,
									text + 4*last_word, 4*(i - last_word), &partial_w);
						partial_len /= 4;
						last_word += partial_len;
						last_w += partial_w;
					}
					if(line_len){
						line_len[line_count] = 4*(last_word - line_start);
					}
					if(line_from){
						line_from[line_count] = 4*(line_start);
					}
					if(line_width){
						line_width[line_count] = last_w;
					}
					line_count++;
					line_start = last_word;
					w = w - last_w;
					if(line_count>=max_line){
						app_free(brks);
						return line_count;
					}
				}

				/* too long word */
				while (w > width) {
					word_locate = locate_word_to_fit(gc, width, text + 4*line_start, 4*(i - line_start), &last_w);
					word_locate /= 4;
					if(line_len){
						line_len[line_count] = 4*word_locate;//locate_word_to_fit(gc, width, text + line_start, i - line_start, &last_w);
					}
					if(line_from){
						line_from[line_count] = 4*line_start;
					}
					if(line_width){
						line_width[line_count] = last_w;
					}

					line_start += word_locate;

					line_count++;
					w = w - last_w;
					if(line_count>=max_line){
						app_free(brks);
						return line_count;
					}
				}
			}
			if (brks[i-1] == LINEBREAK_MUSTBREAK || w == width) {
				if(line_len){
					line_len[line_count] = 4*(i - line_start);
				}
				if(line_from){
					line_from[line_count] = 4*(line_start);
				}
				if(line_width){
					line_width[line_count] = w;
				}
				
				line_count++;

				line_start = i;
				last_word = line_start;
				last_w = 0;
				if(line_count>=max_line){
					app_free(brks);
					return line_count;
				}
			} else {
				last_word = i;
				last_w = w;
			}
			break;
		}
	}

	if (line_start < wordcount) {

		if(line_count>=max_line){
			app_free(brks);
			return line_count;
		}
		if(line_len){
			line_len[line_count] = 4*(wordcount - line_start);
		}
		if(line_from){
			line_from[line_count] = 4*line_start;
		}
		if(line_width){
			line_width[line_count] = w;
		}
		
		line_count++;
	}

	app_free(brks);
	return line_count;
}
