#define __USE_LARGEFILE64
#define _LARGEFILE_SOURCE
#define _LARGEFILE64_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "sysfs-helper.h"
#include "led_ctrl.h"

void 
led_ctrl (int color, int blink)
{
	switch (color) {

		case LED_GREEN:{
			if (blink) {
//				printf("No need to led green blink.\n");
			} else {
				sysfs_write(PLEXTALK_LED_RED_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "100");
			}
		}
		break;

		case LED_ORANGE:{
			if (blink) {
				//�����ǰ��Ҫ�Ӹ�Ϩ��Ķ�������Ȼ������
				sysfs_write(PLEXTALK_LED_RED_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_RED_TRIGGER, "timer");
				sysfs_write(PLEXTALK_LED_GREEN_TRIGGER, "timer");
				sysfs_write(PLEXTALK_LED_RED_DELAYON, "300");
				sysfs_write(PLEXTALK_LED_GREEN_DELAYON,"300");

			} else {
				sysfs_write(PLEXTALK_LED_RED_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "0");
				sysfs_write(PLEXTALK_LED_RED_BRIGHTNESS, "100");
				sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "100");
			}
		}
		break;

		case LED_OFF: {
			sysfs_write(PLEXTALK_LED_RED_BRIGHTNESS, "0");
			sysfs_write(PLEXTALK_LED_GREEN_BRIGHTNESS, "0");
		}	
		break;
	}
}
