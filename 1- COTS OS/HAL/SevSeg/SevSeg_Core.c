/*
 * SevSeg_Core.c
 *
 * Created: 7/25/2023 11:54:27 AM
 *  Author: mahmoud
 */ 

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "SevSeg_Core.h"
#define F_CPU 16000000U
#include <util/delay.h>

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static const uint8 Seven_Segment_Values_g[10] = { 0x7E , 0x0C , 0xB6 , 0x9E , 0xCC , 0xDA , 0xFA , 0x0E , 0xFE , 0xCE};
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
void SevSeg_Init(void)
{

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
void SevSeg_Display(uint8 Value)
{
// 	DIO_WriteChannel(DIO_PORTC_PIN6,PIN_HIGH);
// 	DIO_WriteChannel(DIO_PORTC_PIN7,PIN_LOW);
// 	DIO_WritePORTValue(DIO_PORTA_PIN0 ,Seven_Segment_Values_g[Value%10]);
// 	_delay_ms(1);
// 	DIO_WriteChannel(DIO_PORTC_PIN6,PIN_LOW);
// 	DIO_WriteChannel(DIO_PORTC_PIN7,PIN_HIGH);
// 	DIO_WritePORTValue(DIO_PORTA_PIN0 ,Seven_Segment_Values_g[Value/10]);
// 	_delay_ms(1);
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/