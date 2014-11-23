#ifndef __AUDIO_TYPE_H__
#define __AUDIO_TYPE_H__
#include <dirent.h>
#include <time.h>
#include <glib.h>
#include "file_cursor.h"
#include "xml-helper.h"


#define PLAY_TRACK			0x09				//ѡ��������
#define PLAY_ALBUM			0x10				//ѡ���ļ��н��в���

enum NAVI{
	NAVI_SEEK_BOOKMARK = 0,			//seek with bookmark
	NAVI_SEEK_SECONDS,				//seek with 30 s
	NAVI_SEEK_MINUTES,				//seek with 10mintues
	NAVI_SEEK_TRACK,				//seek with track
	NAVI_SEEK_ALBUM,				//seek with album
};



typedef enum  _PALY_STATE{

		PLAYING,
		PAUSED,
		STOPED,
		READY,
		PENDING,
		NO_START,
		OTHER,

}PLAY_STATE;

enum REPEAT_MODE{
	STANDARD_PLAY = 0 ,  
	TRACK_REPEAT,		 
	ALBUM_REPEAT,		
	ALL_ALBUM_REPEAT,	
	SHUFFLE_PLAY,
};


struct start{
	 char  path[512];				//ȫ·��
	 char  dirpath[512];			//�ļ���·��
	 char  backupfloder[512];		//back���ļ���
	unsigned long start_time;
	int   trackindex;
	float speed;
	double* bands;
};


struct _bmk_no_info {
	
	int current_bmk_no;
	int total_bmk_no;
};





typedef struct  _PLAY_INFO{
	
	PLAY_STATE   play_state;
	int   breakflg;
	int  resumeflg;
	void (*resumeback)(int );
	
}PLAY_INFO;

struct _dir_info {

	char dir_path[512];
	DIR* music_dir;
	struct dirent* music_dirent;
	char music_path[256];
	int cur_index;
	int max_index;

	GArray* offset_array;

};


struct audio_player{
	
	struct start start_place;		//start place for create pthread

	FileCursor*  filecur;			

	int play_mode;					//track mode or album mode
	int repeat_mode;				//repeat mode
	int effect_value;				//sound effect
	int navi_value;					//navigation value

	int manual_pause;				//indicate if user set paused
	int total_songs;					//��ʾ��ǰplay list���ܵĸ�����	
	int cursong_index;				//��ǰplay �ĸ����ǵڼ���

	int out_put;
	
	int  speed;						//speed of music play
	int old_speed;		
	float pitch;						//pitch

	//I have set this to int
	int volume;						//volume
	int adjust;						//adjust volume 

	int  countforsound;					//��ʾ��TTS������ú��Զ��ָ�֮ǰ��״̬
	

	struct _bmk_no_info bmk_no;		//player bookmark num info


	struct equalizer_10bands  equ;


	int help;
	int exp;						//��������£����ŵ�ʱ�򣬲�Ҫ����tts����


	/*those for signal_handler in main loop*/
	
	int del_track;
	int del_album;
	int set_speed;
	int set_repeat;
	int set_bmk;
	int del_cur_bmk;
	int del_all_bmk;
	int set_equ;
	int set_guid_volume;
	int set_guid_speed;
	int set_font_size;
	int set_font_color;
	int set_language;
	int set_tts;

	int in_file_select;
	int deltitleok;
	
	/* Indicate tts is running */
	int is_running;
	int  check_flag;
	int track_num;
	int  patherror;
	int loadflag;			//��ʾ�Ƿ������ɱ�־��ֻ�м�����ɺ󣬲�����Ӧ���Ҽ������л�������

	PLAY_INFO   play_info;
	

};


#endif
