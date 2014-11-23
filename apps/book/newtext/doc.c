#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistr.h>
#include <stdint.h>
#include "doc2text.h"
#include "linebreak.h"
#include "clang.h"

//#define OSD_DBG_MSG 1
#include "nc-err.h"

typedef struct {
	DOC2TEXT_HANDLE handle;
	uint8_t* content;
	int content_size;
	int paragraph_count;
} DocFd;

static const uint16_t sen_breaks[] ={
	0x002E, 	// Ӣ�ĵ�� .
	0x0021, 	// Ӣ��̾�� !
	0x003F, 	// Ӣ���ʺ� ?
	0x3002, 	// ���ľ�� 
	0xFF01, 	// ����̾��
	0xFF1F, 	// �����ʺ�
//	0x000D,		// �ηָ���	
	0x000A,
	0x0D0D,
//	0
};

#define IS_BREAK_LINE_CHAR(p)	((p) == 0x000A)

static int 
sentence_symbol_utf16 (const utf16_t* p)
{
	int n = sizeof(sen_breaks)/sizeof(sen_breaks[0]);
	int i;

	for (i = 0; i < n; i++) {
		if (*p == sen_breaks[i])
			return 1;
	}

	return 0;
}

static const uint16_t pre_sen_breaks[] ={
	
	0x002E, 	// Ӣ�ĵ�� .
	0x0021, 	// Ӣ��̾�� !
	0x003F, 	// Ӣ���ʺ� ?
	0x3002, 	// ���ľ�� 
	0xFF01, 	// ����̾��
	0xFF1F, 	// �����ʺ�
	0x000D,		// �ηָ���	
	0x000A,
	0x0D0D,
	
	0x0020,//�ո�
	0x0009,//tab
	0x002c,//Ӣ�Ķ���
	0xff2c,//���Ķ���
	0x003a,//Ӣ��ð��
	0xff1a,//���� ð��
	0x003b,//Ӣ�ķֺ�
	0xff1b,//���� �ֺ�
	
};


//��ǰ��ʱ�����з�ǰ���ָ����һЩ�ַ�ҲҪ����ȥ
static int 
pre_sentence_symbol_utf16 (const utf16_t* p)
{
	int n = sizeof(pre_sen_breaks)/sizeof(pre_sen_breaks[0]);
	int i;

	for (i = 0; i < n; i++) {
		if (*p == pre_sen_breaks[i])
			return 1;
	}

	return 0;
}


void* doc_open(const char *fpath)
{
	DBGMSG("Doc Open !\n");

	DocFd* fd = malloc(sizeof(DocFd));
	if (!fd) {
		DBGMSG("Malloc DocxFd error!\n");
		return NULL;
	}
	DBGMSG("step!\n");

	fd->handle= doc2text_create(fpath);
	if (!fd->handle) {
		DBGMSG("doc2text create error!\n");
		free(fd);
		return NULL;
	} 

	DBGMSG("step!\n");

	doc2text_gettext(fd->handle, &fd->content, &fd->content_size);
	fd->content_size *= 2;
	fd->paragraph_count = doc2txt_getParagraphCount(fd->handle);

	DBGMSG("total_paragraph = %d\n", fd->paragraph_count);

	return (void*)fd;
}

void doc_close(void* id)
{
	DocFd* fd = (DocFd*)id;

	doc2text_destroy(fd->handle);
	free(fd);
}

int doc_get_total_piece(void* id)
{
	return 1;
}

unsigned long doc_get_piece_size(void* id, unsigned long long offset)
{
	return ((DocFd*)id)->content_size;
}

int doc_get_text(void* id, int offset, char *buf, int *len)
{
	DBGMSG("step!\n");

	DocFd* fd = (DocFd*)id;

	DBGMSG("step!\n");

	int cp_len;
	int ret, i;
	char* brks;
	int brk_index;

	DBGMSG("step!\n");

	int max_offset = fd->content_size;

	DBGMSG("step!\n");

	printf("*len = %d\n", *len);
	printf("max_offset = %d\n", max_offset);
	
	if (offset >= max_offset) {
		DBGMSG("step!\n");

		*len = 0;
		DBGMSG("step!\n");

		return -1;
	} else {
		DBGMSG("step!\n");
	
		if ((offset + *len) > max_offset) {
			printf("Max_offset littler than offset + *len!\n");
			cp_len = max_offset - offset;
			memcpy(buf, fd->content + offset, cp_len);
			*len = cp_len;
			ret = 1;
			DBGMSG("step!\n");

		} else {
			DBGMSG("step!\n");

			const char* text_lang = get_text_lang(UTF16LE, (const char*)(fd->content + offset), *len);
			brks = malloc(*len);
			memset(brks, 0, *len);
			set_linebreaks_utf16((const utf16_t*)(fd->content + offset), *len/2, text_lang, brks);

			DBGMSG("step!\n");

			for (i = *len/2 - 1; i >= 0; i--) {
				if ((brks[i] == LINEBREAK_ALLOWBREAK) 
					|| (brks[i] == LINEBREAK_MUSTBREAK)) {
					brk_index = i;
					break;
				}
			}

			if (i <= 0) {			// breakable place not found
				printf("WARNING: not found breakable place ");
				*len = 0;
				ret = 0;
			} else {
				*len = (brk_index + 1)*2;
				memcpy(buf, fd->content + offset, *len);
				ret = 0;
			}

			DBGMSG("step!\n");

			free(brks);
		}
	}

	DBGMSG("step!\n");

	return ret;
}


/*	func: convert new offset and update fd->content if needed
 *
 *	@param: nchar:  bytes
 */
int doc_get_byte_offset(void* id, int offset, unsigned long nchar)
{	
	DBGMSG("step!\n");

	return offset + nchar;
}

static int doc_prev_sentence(DocFd *fd, int offset)
{
	utf16_t *sptr;
	utf16_t *pOrigin = (utf16_t*)fd->content;

	DBGMSG("step!\n");

	sptr = (utf16_t*)(fd->content + offset);

	/* Found first sentence symbol first */
	while (sptr - pOrigin > 0) {
		if (sentence_symbol_utf16((const utf16_t*)sptr))
			break;
		else
			sptr --;
	}
	
	DBGMSG("get_previous_sentence sptr  = %p\n", sptr);

	if (sptr - pOrigin > 0) {
		sptr--;
		
		//��ǰ�ң�����Ͼ����һ��,������ܷ������ַ�Ҳ��һ��
		while(*sptr && (sptr - pOrigin > 0) && pre_sentence_symbol_utf16((const utf16_t*)sptr))
			sptr--;
		
		//�ҵ������ӵĿ�ͷƫ��
		while(sptr - pOrigin > 0) {
			if (sentence_symbol_utf16((const utf16_t*)sptr)) //�����Ͼ�
				break;
			
			sptr--;
		}


		DBGMSG("step!\n");

		if (sptr > pOrigin) {
			sptr ++;
			return (sptr - pOrigin)*2;
		} else
			return -1;
	}else
		return -1;
}

static int doc_next_sentence(DocFd *fd, int offset)
{
	DBGMSG("step!\n");

	utf16_t *sptr;
	utf16_t *pOrigin = (utf16_t*)fd->content;
	
	sptr = (utf16_t*)(fd->content + offset);

	DBGMSG("step!\n");

	/* Found first sentence symbol first */
	while (sptr - pOrigin > 0) {
		if (sentence_symbol_utf16((const utf16_t*)sptr))
			break;
		else
			sptr ++;
	}
	
	
	if (sptr - pOrigin < fd->content_size/2)
	{
		sptr++;//ָ����һ���ӵĿ�ͷ

		DBGMSG("step!\n");

		//�����ĶϾ������һ��
		while(*sptr && sentence_symbol_utf16((const utf16_t*)sptr))
			sptr++;

		return (sptr - pOrigin)*2;
	}

	DBGMSG("step!\n");

	return -1;
}



/**
���ܣ���offset��������ǰ/�����n������

���룺offset Ϊ��ʼλ�ã�nΪ��������������ǰ�ң������������ң�

���أ��¾��ӵ�ƫ�ƣ� Ϊ0xffffffff��ʾδ�ҵ�

**/
#define ABS(x)				(((x)<0) ? -(x) : (x))

int doc_skip_sentences(void* id, int offset, int n)
{
	DBGMSG("step!\n");

	DocFd* fd = (DocFd*)id;
	int i;

	int ret_offset;

	int number = ABS(n);

	ret_offset = offset;

	int ret;
	
	/* Check if the offset given by caller is correct */
	for (i = 0; i < number; i++)
	{
		if (n > 0)
			ret = doc_next_sentence(fd, ret_offset);
		else
			ret = doc_prev_sentence(fd, ret_offset);

		if (ret == -1) {
			ret_offset = -1;
			break;
		} else 
			ret_offset = ret;		
	}

	DBGMSG("step!\n");

	return ret_offset;
}

int doc_skip_heading(void* id, int offset, int orient)
{
	DBGMSG("step!\n");

	DocFd* fd = (DocFd*)id;

	if (orient == 0)
		return offset;

	offset /=2;
	int cur_paragraph = doc2txt_offsetToParagraph(fd->handle, offset);

	while (1) {
		orient > 0 ? cur_paragraph++ : cur_paragraph--;
		if ((cur_paragraph < 0) || (cur_paragraph > fd->paragraph_count - 1)){
			printf("paragraph limit\n");
			return -1;
		}

		if (doc2txt_getParagraphLevel(fd->handle, cur_paragraph) != 0) { //level 0 heading
			printf("find heading!, paragraph = %d\n", cur_paragraph);
			break;
		}
	}

	DBGMSG("step!\n");

	return doc2txt_getParagraphOffset(fd->handle, cur_paragraph)*2;
}

int doc_skip_paragraph(void* id, int offset, int orient)
{
	DBGMSG("step!\n");

	DocFd* fd = (DocFd*)id;

	if (0 == orient)
		return offset;

	offset /=2;
	int cur_paragraph = doc2txt_offsetToParagraph(fd->handle, offset);

	orient > 0 ? cur_paragraph++ : cur_paragraph--;

	if ((cur_paragraph < 0) || (cur_paragraph > fd->paragraph_count - 1)){
		DBGMSG("step!\n");
		printf("paragraph limit\n");
		return -1;
	}

	DBGMSG("step!\n");

	return doc2txt_getParagraphOffset(fd->handle, cur_paragraph)*2;
}
