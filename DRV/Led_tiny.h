/*! \file   Led.h
   \brief   Led灯控制
   \author  zfj
*/
#ifndef __LED_TINY_H
#define __LED_TINY_H


#define LED_NAME_NONE				"none"
#define LED_NAME_ONESHOT			"oneshot"
#define LED_NAME_HEARTBEAT			"heartbeat"
#define LED_NAME_DEFAULT_ON			"default-on"

#define LED_PARA_NONE				1		//灯灭
#define LED_PARA_ONESHOT			2		//亮一下
#define LED_PARA_HEARTBEAT			3		//闪烁
#define LED_PARA_DEFAULT_ON			4		//一直亮

#ifdef __cplusplus
extern "C"
{
#endif

/*!
@brief  控制串口灯
@param[in]  ledpara
@return 
*/
int LedIndicator(int ledpara);

/*!
@brief  控制金税盘连接灯
@param[in]  ledpara
@return 
*/
int LedJsp(int ledpara);

#ifdef __cplusplus
}
#endif

#endif
