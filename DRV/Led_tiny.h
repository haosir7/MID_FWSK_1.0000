/*! \file   Led.h
   \brief   Led�ƿ���
   \author  zfj
*/
#ifndef __LED_TINY_H
#define __LED_TINY_H


#define LED_NAME_NONE				"none"
#define LED_NAME_ONESHOT			"oneshot"
#define LED_NAME_HEARTBEAT			"heartbeat"
#define LED_NAME_DEFAULT_ON			"default-on"

#define LED_PARA_NONE				1		//����
#define LED_PARA_ONESHOT			2		//��һ��
#define LED_PARA_HEARTBEAT			3		//��˸
#define LED_PARA_DEFAULT_ON			4		//һֱ��

#ifdef __cplusplus
extern "C"
{
#endif

/*!
@brief  ���ƴ��ڵ�
@param[in]  ledpara
@return 
*/
int LedIndicator(int ledpara);

/*!
@brief  ���ƽ�˰�����ӵ�
@param[in]  ledpara
@return 
*/
int LedJsp(int ledpara);

#ifdef __cplusplus
}
#endif

#endif
