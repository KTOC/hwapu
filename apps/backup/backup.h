#ifndef __BACKUP_H__
#define __BACKUP_H__

#include "widgets.h"


enum {

	BACKUP_INTERNER = 0,
	BACKUP_SDCARD,
	BACKUP_USB,	
};

enum {
	No_error = 0,
	CDDA_Remove,
	SD_card_Remove,
	Stroage_medium_Full,
	Faile_to_backup,
};

struct CopyInfo{
	FILE *fp;
	int fd;
	float	 prog_val;
	int		report;
	char   *strinfo;
};

struct backup_nano{

/****************/
	FORM* formMain;
	LABEL* label;
	TIMER *timer;
	struct CopyInfo *thiz;
	char *source;                  //����Դ�ļ�
	char *dest;                    //����Դ�ļ�
	char dirpath[PATH_MAX];                 //Ŀ¼�ļ�
	int iscdda;                    //cdda
	int fd;                         //TTS����
	int getting_size;              //��ȡ�õ����ļ���С
	int ret_pathsize;              //��ȡ�õ��ļ��ܴ�С
	int err_exit;                  //�쳣�˳�
	int wait_state;                //���µȴ���
	int binfo;
	int bmusic;                    //�Ƿ񿽱������ļ�
//	int type;                //���������͵Ĵ洢��
	int media;               //Դ����������
	int remove_type;        // 1--SRC, 2--DST
	int	path_report;
	int path_fd;
	int		src_depth;
	int		dest_depth;
//	int key_locked;
	int bgsound;                   //������
	void *info_id;                 //������Ϣ
	FILE *path_fp;
	unsigned long long freedir;    //������ʣ���ܿռ�
	unsigned long long pathtotal;  //�����ļ����ܿռ�

};



#endif
