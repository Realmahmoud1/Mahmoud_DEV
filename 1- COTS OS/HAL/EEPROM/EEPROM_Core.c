/*
 * EEPROM_Core.c
 *
 * Created: 10/7/2023 7:13:23 PM
 *  Author: mahmoud
 */ 
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "EEPROM_Core.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void EEPROM_WriteByte(uint8 Data , uint8 Address , uint8 Byte_Loc )
{
	I2C_StartCondition();
	
	I2C_SendAddress_WriteOperation(Address);
	
	I2C_WriteByte(Byte_Loc);

	I2C_WriteByte(Data);

	I2C_StopCondition();

}

void EEPROM_WriteMultipleBytes(uint8 *Data ,uint8 Data_Size, uint8 Address , uint8 Byte_Loc )
{
	uint8 cnt = 0;
	I2C_StartCondition();
	
	I2C_SendAddress_WriteOperation(Address);
	
	I2C_WriteByte(Byte_Loc);
	
	while(cnt < Data_Size)
	{
	 I2C_WriteByte(Data[cnt]);	
	 cnt++;
	}
	
	I2C_StopCondition();	
}

uint8 EEPROM_ReadByte(uint8 Address , uint8 Byte_Loc )
{
	uint8 data = 0;
	
	I2C_StartCondition();
	
	I2C_SendAddress_WriteOperation(Address);
	
	I2C_WriteByte(Byte_Loc);
	
	I2C_RepeatedStart();
	
	I2C_SendAddress_ReadOperation(Address);
	
	data = I2C_ReadByte();
	
	I2C_StopCondition();
	
	return data;
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/