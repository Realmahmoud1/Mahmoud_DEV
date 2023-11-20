/*
 * SPI_Core.c
 *
 * Created: 9/30/2023 6:18:45 PM
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
#include "SPI_Core.h"

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
 void SPI_Init(void)
 {
	 #if    (SPI_INIT_STATUS == SPI_MASTER)
	 SPI->SPCR |= 0X53;
	 #elif  (SPI_INIT_STATUS == SPI_SLAVE)
	 SPI->SPCR |= 0X40;
	 #endif 
 }
 
 
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
 uint8 SPI_TranSiver(uint8 Trnas_Data)
 {
   uint8 Rec_Data = 0;
   
   SPI->SPDR = Trnas_Data ;
   
   while(!GET_BIT(SPI->SPSR , 7));
   
   Rec_Data = SPI->SPDR;
   
   return Rec_Data;
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/