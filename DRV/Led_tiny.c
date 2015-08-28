
/*! \file   Led.c
\brief   LedµÆ¿ØÖÆ
\author  zfj
*/
//#include "IncludeMe.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Led_tiny.h"
#include "comdatatype.h"


int LedIndicator(int ledpara)
{
	char buff[128];

	memset(buff, 0, sizeof(buff));
	switch(ledpara)
	{
	case LED_PARA_NONE:
		sprintf(buff, "echo %s > /sys/class/leds/indicator/trigger", LED_NAME_NONE);
		break;
	case LED_PARA_ONESHOT:
		sprintf(buff, "echo %s > /sys/class/leds/indicator/trigger", LED_NAME_ONESHOT);
		break;
	case LED_PARA_HEARTBEAT:
		sprintf(buff, "echo %s > /sys/class/leds/indicator/trigger", LED_NAME_HEARTBEAT);
		break;
	case LED_PARA_DEFAULT_ON:
		sprintf(buff, "echo %s > /sys/class/leds/indicator/trigger", LED_NAME_DEFAULT_ON);
		break;
	default:
		sprintf(buff, "echo %s > /sys/class/leds/indicator/trigger", LED_NAME_NONE);
		break;
	}


	if( system(buff) != 0 )
		return -1;

	return 0;
}

int LedJsp(int ledpara)
{
	char buff[128];
	
	memset(buff, 0, sizeof(buff));
	switch(ledpara)
	{
	case LED_PARA_NONE:
		sprintf(buff, "echo %s > /sys/class/leds/jsp/trigger", LED_NAME_NONE);
		break;
	case LED_PARA_ONESHOT:
		sprintf(buff, "echo %s > /sys/class/leds/jsp/trigger", LED_NAME_ONESHOT);
		break;
	case LED_PARA_HEARTBEAT:
		sprintf(buff, "echo %s > /sys/class/leds/jsp/trigger", LED_NAME_HEARTBEAT);
		break;
	case LED_PARA_DEFAULT_ON:
		sprintf(buff, "echo %s > /sys/class/leds/jsp/trigger", LED_NAME_DEFAULT_ON);
		break;
	default:
		sprintf(buff, "echo %s > /sys/class/leds/jsp/trigger", LED_NAME_NONE);
		break;
	}
	
	
	if( system(buff) != 0 )
		return -1;
	
	return 0;
}

