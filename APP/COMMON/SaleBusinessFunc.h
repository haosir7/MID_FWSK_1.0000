/****************************************************************************
�ļ���           ��SaleBusinessFunc.h
����             ��awe4000r����ҵ�������̺�����
��ʼ����         ��
����             �� 
****************************************************************************/

#ifndef SALE_BUSINESS_FUNC_H
#define SALE_BUSINESS_FUNC_H

#include "YWXMLGY.h"
#include "CInvVol.h"
#include "CInvHead.h"

#define	MAX_ERR_NUM		5


class CSaleBusinessFunc
{
public:
	CSaleBusinessFunc();
	~CSaleBusinessFunc();


public:

	
	/*!
	@brief ��Ʊ��Ϣ��ѯ����ȡ��ǰƱ�ţ�
	@param[in] 
	@param[out] pInvVol  ��Ʊ��Ϣ��
	@param[out] strErr   ������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 GetCurInvInfo(CYWXML_GY &ywxml_gy, CInvVol *pInvVol, string &strErr);
	
	/*!
	@brief ��Ʊ���ߣ�������Ʊ����Ʊ��		
	@param[in] invhead			��Ʊͷ��Ϣ
	@param[out] taxCode   	˰���루20�ֽڣ�
	@param[out] strErr   		������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 MakeNormalInv(CYWXML_GY &ywxml_gy, CInvHead *pInvHead, string &strErr);
	
	/*!
	@brief ��Ʊ���ϣ��հ׷�Ʊ���ѿ�Ʊ���ϣ�
	@param[in] invhead	��Ʊͷ��Ϣ
	@param[in] zflx   ��������	0���հ׷�Ʊ����	1���ѿ���Ʊ����
	@param[out] strErr   		������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 MakeWasteInv(CYWXML_GY &ywxml_gy, CInvHead *pInvHead, UINT8 zflx, string &strErr);
	
	/*!
	@brief ��Ʊ��ѯ
	@param[in] cxfs	��ѯ��ʽ
	@param[in] cxtj	��ѯ����
	@param[out] invNum  ��Ʊ����
	@param[in/out] invhead	��Ʊͷ��Ϣ
	@param[out] strErr   		������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 GetInvHeadInfo(CYWXML_GY &ywxml_gy, UINT8 cxfs, string cxtj, UINT32 &invNum, CInvHead *pInvhead, string &strErr);
	
	/*!
	@brief ��Ʊʵʱ�ϴ�
	@param[out] strErr   		������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 InvoiceUpload(CYWXML_GY &ywxml_gy, string &strErr);
	
	/*!
	@brief ��Ʊ��¼
	@param[in] nsrsbh	��˰��ʶ���
	@param[in] sksbbh   ˰���豸���
	@param[in] SDate   ��˰��ʼ����
	@param[in] EDate	��˰��ֹ����
	@param[out] strErr   ������Ϣ
	@return  1 SUCCESS�� 0  FAILURE
	*/
	INT32 FpblProStart(CYWXML_GY &ywxml_gy, UINT32 SDate, UINT32 EDate, string &strErr);

};


#endif


