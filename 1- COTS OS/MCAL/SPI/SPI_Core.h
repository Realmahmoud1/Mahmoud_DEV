/*
 * SPI_Core.h
 *
 * Created: 9/30/2023 6:19:22 PM
 *  Author: mahmoud
 */ 





/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef SPI_CORE_H_
#define SPI_CORE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "SPI_CFG.h"
#include "MCU.h"
#include "BIT_Math.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define  SPI_MASTER    1
#define  SPI_SLAVE     0

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 void SPI_Init(void);
 
 uint8 SPI_TranSiver(uint8);

#endif /* SPI_CORE_H_ */
/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/



