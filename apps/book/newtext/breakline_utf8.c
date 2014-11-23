#include "breaklines.h"
#include "clang.h"
#include "dbmalloc.h"

/*
 * utf8 ��breakline����
 * utf8's rule is a string of 1, 2, 3 or 4 bytes.  The valid strings
 * are as follows (in "bit format"):
 *	  0xxxxxxx										valid 1-byte
 *	  110xxxxx 10xxxxxx 							valid 2-byte
 *	  1110xxxx 10xxxxxx 10xxxxxx					valid 3-byte
 *	  11110xxx 10xxxxxx 10xxxxxx 10xxxxxx			valid 4-byte
 *
 * 
 *
 *
 *    set_breakline_utf8�����ķ���ֵbrks��ֵ�����ֽ�Ϊ��λ��
 *    ��:

 *   	brks[0]:3         ��     0XE6
 	brks[1]:3                0X88
	brks[2]:1                 0X91
	brks[3]:3           ��
	brks[4]:3
	brks[5]:1
	brks[6]:3      ˵
	brks[7]:3 
	brks[8]:1 
	brks[9]:2           E
	brks[10]:2       n
	brks[11]:2   g
	brks[12]:2    l
	brks[13]:2          i
	brks[14]:2      s
	brks[15]:2   h
	brks[16]:1   ,
	brks[17]:3   ��
	brks[18]:3   
	brks[19]:1 
 */


/*
*func:�ҵ�N���ַ��Ŀ�ʼ����,nΪ�����Ϊ������ǰ��
*str[IN] �����ַ���
*offset[IN]���ַ�str ��offset(�ֽ�)����ʼ
*n[IN] ��ǰ���������offset����ʼ���ҵ���n���ַ������ֽڱ���
*����:�ҵ���ƫ��
*/


static int
utf8_next_nchar(const char *str, int offset, int n)
{
	int inc;

	inc = n > 0 ? 1 : -1;

	for (n = (n > 0) ? n : -n; n > 0; n--) {
		do {
			offset += inc;
		} while ((str[offset] & 0xc0) == 0x80);
	}

	return offset;
}


//һ�������ʱ���Wellcomhetrainstiest,�涨�����ʾ����ʱ��
//�˺������Խ�һ�������۶ϴ���
//max_w[IN]Ϊ����������
//word[IN] Ϊ�ַ���
//len[IN]Ϊ�ַ����ֽڳ�
//width[IN,OUT]�����۶Ϻ����ʾ���
//����ֵ:�ַ����۴�ƫ��
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
		while ((word[mid] & 0xc0) == 0x80)
			mid--;

		NxGetGCTextSize(gc, (char*)word, mid, MWTF_UTF8, &w, &h, &b);
		*width = w;

		if (w == max)//�պôﵽ�����
			break;
        else if (w > max)//һ�뻹�Ǳ�����ȴ��Ǽ���һ��
		{
			high = mid;
		}
		else if (w < max)//һ���ַ�������û�дﵽ�����
		{
			int next = utf8_next_nchar(word, mid, 1);//�ҵ���һ���ַ����ױ���
			if (next >= high)
				break;

			NxGetGCTextSize(gc, (char*)word, next, MWTF_UTF8, &w, &h, &b);
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
                             lines = utf8GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,NULL,NULL,NULL);
                       2 . ��ȡ�ַ�������������������е���Ϣ(���ȡ�λ��)
                             int *line_from = malloc(100);
                             int *line_len = malloc(100);
                             lines = utf8GetTextExWordBreakLines(gc,screenwidth,lang,pStr,strlen(pStr),100,line_from,line_len,NULL);   
                             for(i=0;i<lines;i++)
                             	drawText(gc,pStr+line_from[i],line_len[i]); 
                             
*/
int
utf8GetTextExWordBreakLines(GR_GC_ID gc, GR_SIZE width, const char* lang,
		const char *text, size_t len, int max_line,int line_from[],int line_len[],int line_width[])
{
	GR_SIZE w, h, b;
	GR_SIZE last_w = 0;//��ǰ�ַ���ȳ����������ʱ,���ڻ��˵���һ��С�ڸ������ʱ�Ŀ��
	char *brks;//������ֽ��ܷ�break����Ϣ
	int i;
	int line_start;//ÿ����������(����������ַ���)
	int last_word;//��һ���ַ������С�ڸ������ʱ���Ǹ��ַ�����
	int line_count = 0;//���������
	int word_locate;
	
	if(len <=0){
		return 0;
	}
	NxGetGCTextSize(gc, text, len, MWTF_UTF8, &w, &h, &b);
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

	brks = app_malloc(len);
	if (brks == NULL)
		return -1;

	const char* text_lang = get_text_lang(UTF8, text, len);
	/* Show the breaking points */
    set_linebreaks_utf8(text, len, text_lang, brks);

	line_start = 0;
	last_word = 0;
	for (i = 1; i <= len; i++) {
		switch (brks[i-1]) {
		case LINEBREAK_MUSTBREAK:
		case LINEBREAK_ALLOWBREAK:
			NxGetGCTextSize(gc, text + line_start, i - line_start, MWTF_UTF8, &w, &h, &b);
			if (w > width) {
				if (last_word > line_start) {

					if (w - last_w > width) {
						int partial_len;
						GR_SIZE partial_w;
						partial_len = locate_word_to_fit(gc, width - last_w,
									text + last_word, (i - last_word), &partial_w);
						last_word += partial_len;
						last_w += partial_w;
					}

					if(line_len){
						line_len[line_count] = last_word - line_start;
					}
					if(line_from){
						line_from[line_count] = line_start;
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
					word_locate = locate_word_to_fit(gc, width, text + line_start, i - line_start, &last_w);
					if(line_len){
						line_len[line_count] = word_locate;
					}
					if(line_from){
						line_from[line_count] = line_start;
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
					line_len[line_count] = i - line_start;
				}
				if(line_from){
					line_from[line_count] = line_start;
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

	if (line_start < len) {

		if(line_count>=max_line){
			app_free(brks);
			return line_count;
		}
		if(line_len){
			line_len[line_count] = len - line_start;
		}
		if(line_from){
			line_from[line_count] = line_start;
		}
		if(line_width){
			line_width[line_count] = w;
		}
		
		line_count++;
	}

	app_free(brks);
	return line_count;
}
