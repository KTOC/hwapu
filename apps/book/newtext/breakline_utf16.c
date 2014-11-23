#include "breaklines.h"
#include "clang.h"
#include "dbmalloc.h"

/*
utf16��breakline
 *ע��:utf16��ʱֻ����UCS-2���뼯�����뷶Χ0x0000-0xffff
 *            4B���뷶Χ���Ժ�������Ҫ���ټ�
 *
 *
 *����set_linebreaks_utf16���÷�ע��:
 *��4������brks�ķ���ֵ�����ַ�Ϊ��λ�ģ��Ҷ�������λ��Ϊnobreak
 *��Are you
 * brks[0] = no,brks[1] = no,brks[2] = no,brks[3] = Allow,brks[4] = no,brks[5] = no,brks[6] = must(���һ���϶�Ϊmust)
 *        A                r                e                 blank                y               o           u
 */


/*
*func:�ҵ�N���ַ��Ŀ�ʼ����,nΪ�����Ϊ������ǰ��
*str[IN] �����ַ���
*offset[IN]���ַ�str ��offset(�ֽ�)����ʼ
*n[IN] ��ǰ���������offset����ʼ���ҵ���n���ַ������ֽڱ���
*����:�ҵ���ƫ��
*/

int
utf16_next_nchar(const char *str, int offset, int n)
{
	int inc;

	inc = n > 0 ? 1 : -1;

	for (n = (n > 0) ? n : -n; n > 0; n--) {
		offset += inc*2;
	}
	return offset-offset%2;
}

//һ�������ʱ���Wellcomhetrainstiest,�涨�����ʾ����ʱ��
//�˺������Խ�һ�������۶ϴ���
//max_w[IN]Ϊ����������
//word[IN] Ϊ�ַ���
//len[IN]Ϊ�ַ����ֽڳ�
//width[IN,OUT]�����۶Ϻ����ʾ���
//����ֵ:�ַ����۴�ƫ���ֽ�
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
		//�ҵ�����Ŀ�ʼ�ֽ�
		mid = mid-mid%2;

		NxGetGCTextSize(gc, (char*)word, mid, MWTF_UC16, &w, &h, &b);
		*width = w;

		if (w == max)//�պôﵽ�����
			break;
        else if (w > max)//һ�뻹�Ǳ�����ȴ��Ǽ���һ��
		{
			high = mid;
		}
		else if (w < max)//һ���ַ�������û�дﵽ�����
		{
			int next = utf16_next_nchar(word, mid, 1);//�ҵ���һ���ַ����ױ���
			if (next >= high)
				break;

			NxGetGCTextSize(gc, (char*)word, next, MWTF_UC16, &w, &h, &b);
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
*func:��������ַ���text �ڸ�����������Զ����еķ�ʽ
*       ����������У�������ÿһ�е�ָ��
*gc[IN]:�ַ������ϵͳ����
*width[IN]:�������
*lang[IN]:�ı����ػ������־
*text[IN]:�����ַ���
*len[IN]:�����ַ������ֽڳ�
*max_line[IN]:�����������������,��line_len�������С,��ֹԽ��,��ע�ⲻ��С��2
*line_from[IN,OUT]:��Ҫ�ⲿ�����ڴ���룬���ڷ��ظ��е��ַ�����  �����ַ���text
				:�е�����,��ΪNULL����ʾ ����Ҫ�����ֽڳ���
*line_len[IN,OUT]:��Ҫ�ⲿ�����ڴ���룬���ڷ��ظ��е��ַ����ֽڳ���
                         :��ΪNULL����ʾ ����Ҫ�����ֽڳ���
*line_width[IN,OUT]:���ڷ��ظ��е��ַ��������ʵ�ʿ�ȣ�
  ��Ҫ�ⲿ�����ṩ����Сͬline_len,���ΪNULL����ʾ����Ҫ���ؿ��
*����:�����������,-1Ϊ����

*�����÷�:1 . ��ȡ�ַ��������������
                             lines = utf16GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,NULL,NULL,NULL);
                       2 . ��ȡ�ַ�������������������е���Ϣ(���ȡ�λ��)
                             int *line_from = malloc(100);
                             int *line_len = malloc(100);
                             lines = utf16GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,line_from,line_len,NULL);   
                             for(i=0;i<lines;i++)
                             	drawText(gc,pStr+line_from[i],line_len[i]); 
                             
*/
int
utf16GetTextExWordBreakLines(GR_GC_ID gc, GR_SIZE width,const char* lang,
		const char *text, size_t len, int max_line,int line_from[],int line_len[],int line_width[])
{
	GR_SIZE w, h, b;
	GR_SIZE last_w;//��ǰ�ַ���ȳ����������ʱ,���ڻ��˵���һ��С�ڸ������ʱ�Ŀ��
	char *brks;//������ֽ��ܷ�break����Ϣ
	int i;
	int line_start;//ÿ����������(����������ַ���)����λΪword
	int last_word;//��һ���ַ������С�ڸ������ʱ���Ǹ��ַ�����,��λΪword
	int line_count = 0;//���������
	int word_locate;
	int wordcount = len/2;//�ַ�����
	const char* text_lang;
	
	if(len <=0){
		return 0;
	}
	NxGetGCTextSize(gc, text, len, MWTF_UC16, &w, &h, &b);
	if (w <= width) {//�������һ��
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
	
	text_lang = get_text_lang(UTF16LE, text, len);
	/* Show the breaking points */
    set_linebreaks_utf16(text, wordcount, text_lang, brks);

	line_start = 0;
	last_word = 0;
	
	for (i = 1; i <= wordcount; i++) {
		switch (brks[i-1]) {
		case LINEBREAK_MUSTBREAK:
		case LINEBREAK_ALLOWBREAK:
			NxGetGCTextSize(gc, text + 2*line_start, 2*(i - line_start), MWTF_UC16, &w, &h, &b);
			if (w > width) {
				if (last_word > line_start) {	
					if (w - last_w > width) {
						int partial_len;
						GR_SIZE partial_w;
						partial_len = locate_word_to_fit(gc, width - last_w,
									text + 2*last_word, 2*(i - last_word), &partial_w);
						partial_len /= 2;
						last_word += partial_len;
						last_w += partial_w;
					}
										
					if(line_len){
						line_len[line_count] = 2*(last_word - line_start);
					}
					if(line_from){
						line_from[line_count] = 2*(line_start);
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
					word_locate = locate_word_to_fit(gc, width, text + 2*line_start, 2*(i - line_start), &last_w);
					word_locate /= 2;
					if(line_len){
						line_len[line_count] = 2*word_locate;//locate_word_to_fit(gc, width, text + line_start, i - line_start, &last_w);
					}
					if(line_from){
						line_from[line_count] = 2*line_start;
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
					line_len[line_count] = 2*(i - line_start);
				}
				if(line_from){
					line_from[line_count] = 2*(line_start);
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
			line_len[line_count] = 2*(wordcount - line_start);
		}
		if(line_from){
			line_from[line_count] = 2*line_start;
		}
		if(line_width){
			line_width[line_count] = w;
		}
		
		line_count++;
	}

	app_free(brks);
	return line_count;
}
