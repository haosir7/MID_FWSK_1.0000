#ifndef __SERIALPORT_PROTOCOL_H
#define __SERIALPORT_PROTOCOL_H

#include <string>
#include <string.h>
#include <stdio.h>
#include "SerialConfig.h"
#include "arithmetic.h"
#include "serial.h"

using namespace std;

class SerialProtocol
{														 
private: 
	INT32 m_devfd;
	UINT32 m_fill_count;
	UINT32 m_get_count;
	UINT8 packageNo;

	UINT8 m_revBuf[SERIAL_BUFFER_MAX_LEN];
	UINT8 m_rspBuf[SERIAL_BUFFER_MAX_LEN];

	//Ϊ����ģʽ���
	SerialProtocol();  
	SerialProtocol(const SerialProtocol &);  
	SerialProtocol& operator = (const SerialProtocol &); 
	~SerialProtocol();

	void resetRevStruct();
	void resetRspStruct();
	void resetAll();

	// function for send & rev
	UINT8 Rev_Pack();
	void Send_Pack();
	void Send_Pack(UINT16 len);
//	UINT8 Wait_NP_Pack();
//	UINT8 Wait_OK_Pack();
	UINT8 Wait_Next_Cmd_Pack();
	void clearSerial();

	//common function
	UINT16 Cal_CRC(UINT8 *ptr, UINT16 len);

protected:
	UINT8  businessData[BUSINESS_DATA_BUF_MAX_LEN];
	UINT8  businessType;
	bool   newCmd;

public:
	rev_cmdStruct *m_revCmd, m_cRevCmd;
	rsp_cmdStruct *m_rspCmd, m_cRspCmd;

	//Ϊ����ģʽ���
	static SerialProtocol* getInstance(){
		static SerialProtocol instance;   //�ֲ���̬����  
		return &instance; 
	}

	// function for serial init
	bool InitPort(INT8 *devpath, int baud);
	bool ReleasePort ();

	inline INT32 getSerialfd() {return m_devfd;};
	UINT8 sendData(UINT8 type, UINT8 cmd);
	UINT8 revData();

	void Rsp_OK();
	void Rsp_ERR(UINT8 err);
	void Rsp_ERR(string errstr);
	void Rsp_WT();
	void Rsp_NP(UINT8 packageNo);

	//function for fill rsp buff
	INT8 FillParament(UINT8 byte);
	INT8 FillParament(INT64 x, UINT8 len, bool order);
	INT8 FillParament(UINT8 *buf, UINT8 len);
	INT8 FillParament(string str, UINT32 maxlen);

	void ser_delay(UINT32 Msecs);
};

#endif




