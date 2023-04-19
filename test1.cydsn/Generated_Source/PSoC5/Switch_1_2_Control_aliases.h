/*******************************************************************************
* File Name: Switch_1_2_Control.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Switch_1_2_Control_ALIASES_H) /* Pins Switch_1_2_Control_ALIASES_H */
#define CY_PINS_Switch_1_2_Control_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Switch_1_2_Control_0			(Switch_1_2_Control__0__PC)
#define Switch_1_2_Control_0_INTR	((uint16)((uint16)0x0001u << Switch_1_2_Control__0__SHIFT))

#define Switch_1_2_Control_1			(Switch_1_2_Control__1__PC)
#define Switch_1_2_Control_1_INTR	((uint16)((uint16)0x0001u << Switch_1_2_Control__1__SHIFT))

#define Switch_1_2_Control_INTR_ALL	 ((uint16)(Switch_1_2_Control_0_INTR| Switch_1_2_Control_1_INTR))

#endif /* End Pins Switch_1_2_Control_ALIASES_H */


/* [] END OF FILE */
