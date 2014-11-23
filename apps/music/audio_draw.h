#ifndef __AUDIO_DRAW_H__
#define __AUDIO_DRAW_H__

#define MWINCLUDECOLORS
#include "microwin/nano-X.h"
#include "load_preset.h"
#include "widgets.h"
#include "file_cursor.h"
#include <time.h>


#define MUSIC_CELL_ICON_Y	48//50


/*This structure build for test long pressed key*/
struct long_press {

	TIMER *   lid;
	int l_flag;
	int s_flag;		//this will be set to 1 if timer(lid)has been excute
	int orient;		//seek orient
};

struct nano_data{

	//struct EFont* efont;
	struct long_press l_key;

	LABEL *  load_label;

	FORM *  form;								//music �е������
	
	 LABEL *  lsong_name;						//��ʾmp3���ļ���
	 LABEL *  lcur_time;							//��ʾ��ǰ���ŵ�mp3ʱ��
	 LABEL *  ltotal_time;							//��ʾ�ܵ�ʱ��
	 LABEL *  lplay_mode;							//��ʾ���ֲ�ͬ�Ļ���ģʽ(equ)
	 PICTURE *  prepeat_mode;					//��ʾ���ֲ�ͬ���ظ�ģʽ
	 PICTURE *  psymbol;							//��ʾ���ַ���
	 PICTURE *pcell;						             //���ȵĻ���
	 PICTURE *pprocess;							//������
	 WIDGET *line; 
	 int      process_x;							 //��������λ��
	 int     process_y;

	 					

	 GR_WINDOW_ID   focusid;
	 
	 
	int  menuflag;
	int fd;
	TIMER * tid;									//ˢ�½���Ķ�ʱ��
	
	GR_GC_ID gc;
	
	/* This for back ground */
	GR_COLOR			fg_color;
	GR_COLOR			bg_color;

	/* Gc for exposure */
	GR_GC_ID ex_gc;		
	
	

	int headphone;
	int keylocked;

	/* Exposure is progressing */
	int exp_pro;

	struct ScrollText* title_text;

	/* id for info tts */
	void* info_id;
	
};

//void audio_image_init (struct nano_data* nano, const char* theme_path);
//void audio_image_free (struct nano_data* nano);

void audio_draw_copy (struct nano_data* nano);
void audio_draw_title (struct nano_data* nano, const char* path);
void audio_draw_title_num_zero (void);
void audio_draw_progress_bar (struct nano_data* nano, unsigned long time_cur,
									unsigned long time_tal, int base);
void audio_draw_music_background (struct nano_data* nano);
void audio_draw_total_time (struct nano_data* nano, unsigned long time);
void audio_draw_current_time (struct nano_data* nano, unsigned long time);
void audio_draw_repeat_mode (struct nano_data * nano, int mode);
void audio_draw_equalizer(struct nano_data* nano, 
								enum sound_effect effect);


#endif
