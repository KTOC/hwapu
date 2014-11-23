#include <stdio.h>
#include <string.h>
#include "cal_stat.h"
#define  DEBUG_PRINT 1

#include "cal_res.h"
#include "cal_box.h"
#include "cal_tts.h"

#define DEBUG_PRINT 1
#define OSD_DBG_MSG
#include "nc-err.h"


#if DEBUG_PRINT
#define info_debug DBGMSG
#else
#define info_debug(fmt,args...) do{}while(0)
#endif


#define RESET(c)  (c = -1);

enum STATE{
	S0 = 0,
	S1,
	S2,
	S3,
	S4,

	S5,		// this two state for power calculation
	S6,		

	S7,		//this state for ERROR happend

	S8, 	//for forbidden those 000.002happend
	S9      //���ź�����������
};

static struct cal_expression cal_str;
static int cal_stat;

struct cal_expression* const express = &cal_str;

/*this element for different state to select*/
//static int operator_no[9] = {11, 11, 17, 16, 5, 13, 2, 1, 16};
static int operator_no[] = {12, 13, 18, 17, 5, 14, 2, 1, 17,12};
static char operator[][17] = {//�����������ֵĵط���Ӧ���������븺�ŵĿ���
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '@'},//@ stands for negative,must locate at the last of the array
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', 'C', '@'},
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '+', '-', '*', '/', '=', 'C', '@'},//S2 ��������
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-', '*', '/', '=', 'C', '@'},//S3 û��С����
		{'+', '-', '*', '/', 'C'},
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', 'C', '=', '@'},
		{'=', 'C'},
		{'C'},
		{'1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '+', '-', '*', '/', '=', 'C', '@'},//S8 û��0
		{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'C', '.'},//���ź�����������
};


static void 
cal_stat_init (void)
{
	memset(&cal_str, 0, sizeof(cal_str));
	cal_stat = S0;
	cal_str.res_tts_flag = 0;
	cal_str.show_res_flag = 0;
}


void
cal_str_init (void)
{
	cal_stat_init();
}


/*press up or down key means update the expression for show*/
void 
cal_str_update (int roll)
{
	//info_debug("cal_stat=%d,cal_str.choice=%d,cal_str.cal_str_p=%d\n",cal_stat,cal_str.choice,cal_str.cal_str_p);
	int maxnum = operator_no[cal_stat] - 1;
	if(maxnum < 1)
		maxnum = 1;
	if (roll == ROLL_UP)
		cal_str.choice ++;
	else
		cal_str.choice --;

#if 0
	//ǰ�������˸��ţ����������븺��
	if((cal_str.cal_str_p >=1) && ('@'==cal_str.cal_str[cal_str.cal_str_p-1]))
	{
		maxnum--;
	}
#endif
	if(cal_str.cal_str_p == 0 
		|| cal_stat == S4 || cal_stat == S6 || cal_stat == S9)//�ʼ�������븺�ţ�û�и��ſ����� ҲҪ��1 ��ԭ
	{
		maxnum += 1;
	}
	else
	{
		if((cal_str.cal_str[cal_str.cal_str_p-1] == '*'|| cal_str.cal_str[cal_str.cal_str_p-1] == '/'))
		{//�ڳ˺Ż���ź���������븺��
			maxnum += 1;
		}
		
	}
	


	if (cal_str.choice >= maxnum)
		cal_str.choice = 0;
	else if (cal_str.choice < 0)
		cal_str.choice = maxnum - 1;
	
	cal_str.cal_str[cal_str.cal_str_p] 
		= operator[cal_stat][cal_str.choice];
	
	cal_tts(TTS_ELEMENT, &(cal_str.cal_str[cal_str.cal_str_p]));

	info_debug("cal_stat=%d,cal_str.choice=%d,cal_str.cal_str_p=%d\n",cal_stat,cal_str.choice,cal_str.cal_str_p);
}


static void
cal_error_handler(void)
{
	char flag = (char)cal_str.error_flag;
	DBGMSG("cal error!! flag:%d\n",flag);
	cal_str.show_res_flag = 1;	//�������������û�취show error...
	cal_stat = S7;				//ʲôʱ��ȡ����ʾresult��?
	cal_tts(TTS_RESULTERROR, &flag);
}

/*press right key means git, this may change the state of calculator*/
void
cal_str_git (void)
{

	char git_c = cal_str.cal_str[cal_str.cal_str_p];
	info_debug("cal_str_git:%s\n",cal_str.cal_str);
	info_debug("cal_str_git:%d,git_c:%d\n",cal_stat,git_c);
	
	if (strlen(cal_str.cal_str) >= UI_SHOW_MAX_SIZE) {
		DBGMSG("reach to max size\n");
		if ((git_c == 'C')) {
			printf("cuntinue!\n");
		} else {
			//cal_tts(TTS_ERRBEEP, NULL);
			cal_tts(TTS_MAXINPUTVALUE,NULL);
			return ;
		}
	}				//if str size have been lager than ui_show_max_size, not handler

	if (git_c == 0) {
		cal_tts(TTS_ERRBEEP, NULL);
		return ;
	}
	else if(git_c == '@')
	{
		cal_str.cal_str[cal_str.cal_str_p] = git_c;
		cal_str.cal_str_p++;
		cal_str.bits ++;
		RESET(cal_str.choice);
		cal_stat = S9;//������������
		cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
		info_debug("input negative:%d\n",cal_str.cal_str_p);
		return;

	}

	switch (cal_stat) {
		case S0:{
			switch (git_c) {
					case '0':
						/*this handler for s0, no 0 inputted*/
						//�����������ˣ�����
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S8;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;	

					case '.':
						cal_str.cal_str[cal_str.cal_str_p] = '0';
						cal_str.cal_str[cal_str.cal_str_p + 1] = '.';
						cal_str.cal_str_p += 2;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S3;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET_POINT, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					case '+':
					case '-':
					case '*':
					case '/':						
					case '=':
					case 'C':
						info_debug("Error handler of git_c!\n");
						break;

					default:
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S2;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;	
				}
			}
			break;
	
			case S1:{
				switch (git_c) {
					case '0':
						/*this handler for s1, no 0 inputed*/
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S8;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;
	
					case '.':
						cal_str.cal_str[cal_str.cal_str_p] = '0';
						cal_str.cal_str[cal_str.cal_str_p + 1] = '.'; 
						cal_str.cal_str_p += 2;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S3;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET_POINT, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;
	
					case '+':
					case '-':
					case '*':
					case '/':	
					case '=':		
						info_debug("Error handler of git_c!\n");
						break ;
						
					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;
	
					default:
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S2;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;	
				}
			}
			break;
	
			case S2:{
				switch (git_c) {
					case '0':
						if (cal_str.bits < 12) {
							cal_str.cal_str[cal_str.cal_str_p] = '0';
							cal_str.cal_str_p ++;
							cal_str.bits ++;
							RESET(cal_str.choice);
							//cal_tts(TTS_NORBEEP, NULL);
							cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						} else {
							cal_tts(TTS_ERRBEEP, NULL);
						}
						break;
						
					case '.':
						cal_str.cal_str[cal_str.cal_str_p] = '.';
						cal_str.cal_str_p ++;
						//cal_bits no ++
						RESET(cal_str.choice);
						cal_stat = S3;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;
						
					case '+':
					case '-':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;
						cal_stat = S1;
						cal_tts(TTS_NORBEEP, NULL);
						//������ʾһ��ǰ�����������,
						//get_prev_opnum();
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					case '*':
					case '/':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;

						if (check_first_num(cal_str.cal_str)) {
							info_debug("S2--->S5\n");
							cal_stat = S5;
						} else {
							info_debug("S2--->S1\n");
							cal_stat = S1;
						}
						cal_tts(TTS_NORBEEP, NULL);
						//����ͬ����ʾǰ�����������
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;
					
					case '=':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.resault 
							= get_cal_resault(cal_str.cal_str, &cal_str.error_flag);

						if (cal_str.error_flag)
							cal_error_handler();
						else {
							cal_str.show_res_flag = 1;	
							cal_stat = S4;
							//cal_tts(TTS_RESULT, (char*)(&cal_str.resault));
							//���������ﲥ��tts�����������
							//��������
							cal_str.res_tts_flag = 1;	//tts the result
						}
						break;
	
					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;
			
					default:
						if (cal_str.bits < 12) {
							cal_str.cal_str[cal_str.cal_str_p] = git_c;
							cal_str.cal_str_p ++;
							cal_str.bits ++;
							RESET(cal_str.choice);
							//cal_tts(TTS_NORBEEP, NULL);
							cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						} else {
							cal_tts(TTS_ERRBEEP, NULL);
						}
						break;
				}
			}
			break;
			
			case S3:{
				switch (git_c) {
					case '0':
						if (cal_str.bits < 12) {
							cal_str.cal_str[cal_str.cal_str_p] = git_c;
							cal_str.cal_str_p ++;
							cal_str.bits ++;
							RESET(cal_str.choice);
							//cal_tts(TTS_NORBEEP, NULL);
							cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						} else {
							cal_tts(TTS_ERRBEEP, NULL);
						}
						break;
	
					case '.':
						info_debug("Error handler git_c!\n");
						break;

					case '+':
					case '-':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;
						cal_stat = S1;
						cal_tts(TTS_NORBEEP, NULL);
						//����Ҫ����ǰ����Ǹ�������
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					case '*':
					case '/':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;
						if (check_first_num(cal_str.cal_str)) {							
							info_debug("S3--->S5\n");
							cal_stat = S5;
						} else {
							info_debug("S3--->S1\n");
							cal_stat = S1;
						}
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;
					
					case '=':
						if (cal_str.cal_str[cal_str.cal_str_p - 1] == '.') {
							cal_str.cal_str[cal_str.cal_str_p] = '0';							
							cal_str.cal_str_p ++;
						}
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.resault 
							= get_cal_resault(cal_str.cal_str, &cal_str.error_flag);

						if (cal_str.error_flag) 
							cal_error_handler();	
						else {
							cal_str.show_res_flag = 1;	
							cal_stat = S4;
						 	//cal_tts(TTS_RESULT, (char*)(&cal_str.resault));
							//������ʾ���,��������������tts
							//�������fix����
							// ��������ʾ����������
							cal_str.res_tts_flag = 1;
						}
						break;
	
					case 'C':					
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;
						
					default:
						if (cal_str.bits < 12) {
							cal_str.cal_str[cal_str.cal_str_p] = git_c;
							cal_str.cal_str_p ++;
							cal_str.bits ++;
							RESET(cal_str.choice);
							//cal_tts(TTS_NORBEEP, NULL);
							cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						} else {
							cal_tts(TTS_ERRBEEP, NULL);
						}
						break;
				}
			}
			break;
			
			case S4:{
				switch (git_c) {
					//�����ص������
					case '+':
					case '-':
					case '*':
					case '/':
						//�����Ƚ��������
						memset(cal_str.cal_str, 0, CAL_STR_MAX_SIZE);
						memcpy(cal_str.cal_str, cal_str.res_buf, strlen(cal_str.res_buf));
						cal_str.show_res_flag = 0;	//����ʾ�����
						cal_str.cal_str_p = strlen(cal_str.res_buf);//����������express

						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;
						cal_stat = S1;
						//cal_tts(TTS_NORBEEP, NULL);
						//����Ҫ����ǰ����Ǹ�������
						cal_tts(TTS_NEWCALC, get_prev_op_num(cal_str.cal_str));
						break;

					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;
				}
			}
			break;

			case S5:{
				switch (git_c) {
				case '0':
					//�úã���������
					cal_str.cal_str[cal_str.cal_str_p] = git_c;
					cal_str.cal_str_p ++;
					cal_str.bits ++;
					RESET(cal_str.choice);
					cal_stat = S8;
					//cal_tts(TTS_NORBEEP, NULL);
					cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
					break;
	
				case '.':
					cal_str.cal_str[cal_str.cal_str_p] = '0';
					cal_str.cal_str[cal_str.cal_str_p + 1] = '.'; 
					cal_str.cal_str_p += 2;
					cal_str.bits ++;
					RESET(cal_str.choice);
					cal_stat = S3;
					//cal_tts(TTS_NORBEEP, NULL);
					cal_tts(TTS_INPUTSET_POINT, &(cal_str.cal_str[cal_str.cal_str_p-1]));
					break;
	
				case '+':
				case '-':
				case '*':
				case '/':	
					info_debug("Error handler of git_c!\n");
					break;
				
				case '=':
					cal_str.cal_str[cal_str.cal_str_p] = git_c;
					cal_str.cal_str_p ++;
					cal_str.bits = 0;
					RESET(cal_str.choice);
					cal_stat = S6;
					cal_str.resault 
						= get_power_cal_resault(cal_str.cal_str, &cal_str.error_flag);

					if (cal_str.error_flag) 
						cal_error_handler();
					else {
						cal_str.show_res_flag = 1;	
						//cal_tts(TTS_RESULT, (char*)(&cal_str.resault));
						//tts������ʾ����ĵط�
						cal_str.res_tts_flag = 1;
					}
					break ;
			
				case 'C':
					cal_stat_init();					
					cal_tts(TTS_NORBEEP, NULL);
					cal_tts(TTS_CLEARALL, NULL);
					break;
	
				default:
					if (cal_str.bits < 12) {
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S2;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
					} else {
						cal_tts(TTS_ERRBEEP, NULL);
					}
					break;
			
				}
			}
			break;

			case S6:{
				switch (git_c) {
					case '=':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						RESET(cal_str.choice);
						cal_str.cal_str_p ++;
						cal_str.resault 
							= get_power_cal_resault(cal_str.cal_str, &cal_str.error_flag);
						
						if (cal_str.error_flag) 
							cal_error_handler();
						else {
							cal_str.show_res_flag = 1;	
							cal_str.res_tts_flag = 1;
							//cal_tts(TTS_RESULT, (char*)(&cal_str.resault));
							//tts������ʾ����ĵط�
						}
						break;

					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;
				}
			}
			break;

			case S7:
				cal_stat_init();
				break;

			case S8:
				info_debug("In case S8.\n");
				switch (git_c) {
					case '.':
						cal_str.cal_str[cal_str.cal_str_p] = '.';
						cal_str.cal_str_p ++;
						//cal_bits no ++
						RESET(cal_str.choice);
						cal_stat = S3;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					
					case '+':
					case '-':
					case '*':
					case '/':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.bits = 0;
						cal_stat = S1;
						cal_tts(TTS_NORBEEP, NULL);
						//������ʾһ��ǰ�����������,
						//get_prev_opnum();
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					case '=':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						RESET(cal_str.choice);
						cal_str.resault 
							= get_cal_resault(cal_str.cal_str, &cal_str.error_flag);

						if (cal_str.error_flag)
							cal_error_handler();
						else {
							cal_str.show_res_flag = 1;	
							cal_stat = S4;
							//cal_tts(TTS_RESULT, (char*)(&cal_str.resault));
							//���������ﲥ��tts�����������
							//��������
							cal_str.res_tts_flag = 1;	//tts the result
						}
						break;
	
					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;

					default:
						cal_str.cal_str[cal_str.cal_str_p - 1] = git_c;
						cal_str.cal_str[cal_str.cal_str_p] = 0;
						//cal_str.cal_str_p ++; ������Բ�++
						//cal_bits no ++		
						RESET(cal_str.choice);
						cal_stat = S2;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

				}
				break;
			case S9:{
			switch (git_c) {
					case '0':
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S8;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;	

					case '.':
						cal_str.cal_str[cal_str.cal_str_p] = '0';
						cal_str.cal_str[cal_str.cal_str_p + 1] = '.';
						cal_str.cal_str_p += 2;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S3;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET_POINT, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;

					case '+':
					case '-':
					case '*':
					case '/':						
					case '=':
						info_debug("Error handler of git_c!\n");
						break;
					case 'C':
						cal_stat_init();
						cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_CLEARALL, NULL);
						break;

					default:
						cal_str.cal_str[cal_str.cal_str_p] = git_c;
						cal_str.cal_str_p ++;
						cal_str.bits ++;
						RESET(cal_str.choice);
						cal_stat = S2;
						//cal_tts(TTS_NORBEEP, NULL);
						cal_tts(TTS_INPUTSET, &(cal_str.cal_str[cal_str.cal_str_p-1]));
						break;	
				}
			}
			break;		
		}	
	info_debug("cal_str.bits = %d\n", cal_str.bits);
	if(cal_str.bits>=12) {
		cal_tts(TTS_MAXINPUTVALUE,NULL);
	}
}


void
cal_str_back (void)
{
	switch (cal_stat) {

		case S0:
			cal_stat_init();
			cal_tts(TTS_TOPFIGURE, NULL);
			break;

		case S1:
			info_debug("Back in S1.\n");
			if (cal_str.cal_str[cal_str.cal_str_p] != 0) {
				cal_str.cal_str[cal_str.cal_str_p] = 0;
				RESET(cal_str.choice);
				//cal_str.bits ����
				//cal_str.cal_str_pҲ�����԰�
				//cal_tts(TTS_CANCEL, NULL);
				cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
				return ;
			} 
			cal_str.cal_str[cal_str.cal_str_p] = 0;
			cal_str.cal_str[cal_str.cal_str_p - 1] = 0;

			cal_str.bits = get_express_bits(cal_str.cal_str);
			info_debug("cal_str.bits = %d\n", cal_str.bits);
			
			cal_str.cal_str_p --;
				/*This may not happend in this condition*/
			if (cal_str.cal_str_p == 0) {
				cal_stat_init();
				break;
			}

			if (check_have_point(cal_str.cal_str)) {
				cal_stat = S3;
				info_debug("Back S1-->S3.\n");
			} else {
				cal_stat = S2;
				info_debug("Back S1-->S2.\n");
			}

			info_debug("Back in S1 cur cal_str.cal_str[cal_str.cal_str_p]=%x\n",cal_str.cal_str[cal_str.cal_str_p]);

			//
			if(cal_str.cal_str_p>0 && '@' == cal_str.cal_str[cal_str.cal_str_p-1]){
				cal_stat = S9;
			}

			
			//cal_tts(TTS_CANCEL, NULL);	
			cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
			break;

		case S8:		//���s8��Ӧ�ú�s2����ͬ
		case S2:
		case S9:	
			info_debug("Back in S2!\n");
			if (cal_str.cal_str[cal_str.cal_str_p] != 0) {
				cal_str.cal_str[cal_str.cal_str_p] = 0;
				RESET(cal_str.choice);
				//cal_str.bits ����
				//cal_str.cal_str_pҲ�����԰�
				//cal_tts(TTS_CANCEL, NULL);
				cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
				return ;
			} 
			
			if (cal_str.cal_str_p <= 1) {
				cal_stat_init();
				info_debug("Back S2-->S0.\n");
			} else {
				if (OPERATOR(cal_str.cal_str[cal_str.cal_str_p - 2])) {
					cal_stat = S1;
					cal_str.bits = 0;
					info_debug("Back S2-->S1.\n");
				} else {
					cal_str.bits --;
					info_debug("Back S2-->S2.\n");
				}
				cal_str.cal_str[cal_str.cal_str_p] = 0;
				cal_str.cal_str[cal_str.cal_str_p - 1] = 0;
				cal_str.cal_str_p --;
			}


			info_debug("Back in S2,8 cur cal_str.cal_str[cal_str.cal_str_p]=%x\n",cal_str.cal_str[cal_str.cal_str_p]);

			//
			if(cal_str.cal_str_p>0 && '@' == cal_str.cal_str[cal_str.cal_str_p-1]){
				cal_stat = S9;
			}
			
			//cal_tts(TTS_CANCEL, NULL);	
			cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
			break;

		case S3:
			info_debug("Back in S3!\n"); 
			
			if (cal_str.cal_str[cal_str.cal_str_p] != 0) {
				cal_str.cal_str[cal_str.cal_str_p] = 0;
				RESET(cal_str.choice);
				//cal_str.bits ����
				//cal_str.cal_str_pҲ�����԰�
				//cal_tts(TTS_CANCEL, NULL);
				cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
				return ;
			} 

			if (cal_str.cal_str[cal_str.cal_str_p - 1] == '.'){
				//����Ҫ��һ���жϣ��п��ܻ��˵�S8״̬��
				//������ʱ�Ȳ��ܣ��Ժ���
				cal_stat = S2;
				info_debug("Back S3-->S2.\n");
			} else {
				cal_str.bits --;
				info_debug("Back S3-->S3.\n");
			}
			
			cal_str.cal_str[cal_str.cal_str_p] = 0;
			cal_str.cal_str[cal_str.cal_str_p - 1] = 0;
			cal_str.cal_str_p --; 


			info_debug("Back in S3 cur cal_str.cal_str[cal_str.cal_str_p]=%x\n",cal_str.cal_str[cal_str.cal_str_p]);

			//
			if(cal_str.cal_str_p>0 && '@' == cal_str.cal_str[cal_str.cal_str_p-1]){
				cal_stat = S9;
			}

			
			//cal_tts(TTS_CANCEL, NULL);
			cal_tts(TTS_BACKCANCEL, get_prev_op_num(cal_str.cal_str));
			break;

		case S4:
			info_debug("back in s4.\n");
			cal_str_init();
			cal_tts(TTS_CLEARALL, NULL);
			break;
		
		case S5:
		case S6:
		case S7:
			info_debug("back in s5,6,7\n");
			cal_stat_init();
			cal_tts(TTS_CLEARALL, NULL);
	}
}


/* Get cal state if current state is "result" */
int cal_result_state (void)
{
	if ((cal_stat == S4 ) || (cal_stat == S7) || (cal_stat == S6))
		return 1;
	else
		return 0;
}

