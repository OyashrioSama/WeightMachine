/**
 *****************************************************************************************************
  * @copyright	(c)  Shenzhen Saiyuan Microelectronics Co., Ltd
  * @file	CallBackFunction.c
  * @author	 
  * @version 	
  * @date	
  * @brief	Write the logic you want to implement in the function body
  * @details 
 *****************************************************************************************************
 * @attention
 *
 *****************************************************************************************************
 */
#include "SC_Init.h"
#include "SC_it.h"
#include "..\Drivers\SCDriver_list.h"
#include "HeadFiles\SysFunVarDefine.h"

/**
  * @brief  �͹���ʵ��������BTM��Դ���û���Ҫ��BTM��ʵ�ֵ������ڴ˺���ʵ��
  * @note   �ú�������TKDriver.C�ļ�LowPower_Touchkey_Scan()�����е���
  *         //�ú������ڵ͹���ģʽɨ�躯���е���
  *         //�˺���ΪBTM��ʱ���Ѻ��û��Ĵ�����
  *         //�͹���ģʽ�£��û�����BTM��ʵ�ֵĹ��ܿ��ڴ˺���ʵ��
  *         //�����ѯĳ��IO����ƽ�����仯������������(TK���ѳ���)���˳��͹���ģʽ���ڴ˺����е���TouchKey_QuitLowPowerMode()
  * @param  None
  * @retval None
  */
void Customer_BTM_Dispose()
{
	
}
/**
  * @brief  �ڽ���͹���ǰ���û���Ҫ�ر���Χ�ĵ�ĵ�·��ʹ�������
  * @note   �ú�������TKDriver.C�ļ�TouchKey_IntoLowPowerMode()�����е���,�û�ֻ����д�����ڲ�ʵ�֣������裩
  *         //����͹���ǰ����
  *         //�ú�������TouchKey_IntoLowPowerMode()�����
  *         //�û�������øú���������
  *         //�û���Ҫ�Լ���д�ú���ʵ�壡����
  *  		//�رպĵ�����裬������͹���
  * @param  None
  * @retval None
  */
void Customer_IntoLowPowerMode_Init()
{
	
}
/**
  * @brief  ���˳��͹���ǰ���û����еı�Ҫ�����������裩
  * @note   �ú�������TKDriver.C�ļ�TouchKey_QuitLowPowerMode()�����е��ã��û�ֻ����д�����ڲ�ʵ�֣������裩
  *         //�˳��͹���ǰ����
  *         //�ú������ڵ͹���������TK�����˳��͹���ʱ���ã�����TouchKey_QuitLowPowerMode()�е���
  *         //�û�������øú���������
  *         //�û���Ҫ�Լ���д�ú���ʵ�壡����
  * 		//�ָ���Ҫ������
  * @param  None
  * @retval None
  */
void Customer_QuitLowPowerMode_Init()
{
	
}
