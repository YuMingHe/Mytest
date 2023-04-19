/*******************************************************************************
* File Name: Switch_3_10_Control.h  
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

#if !defined(CY_PINS_Switch_3_10_Control_ALIASES_H) /* Pins Switch_3_10_Control_ALIASES_H */
#define CY_PINS_Switch_3_10_Control_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Switch_3_10_Control_0			(Switch_3_10_Control__0__PC)
#define Switch_3_10_Control_0_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__0__SHIFT))

#define Switch_3_10_Control_1			(Switch_3_10_Control__1__PC)
#define Switch_3_10_Control_1_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__1__SHIFT))

#define Switch_3_10_Control_2			(Switch_3_10_Control__2__PC)
#define Switch_3_10_Control_2_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__2__SHIFT))

#define Switch_3_10_Control_3			(Switch_3_10_Control__3__PC)
#define Switch_3_10_Control_3_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__3__SHIFT))

#define Switch_3_10_Control_4			(Switch_3_10_Control__4__PC)
#define Switch_3_10_Control_4_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__4__SHIFT))

#define Switch_3_10_Control_5			(Switch_3_10_Control__5__PC)
#define Switch_3_10_Control_5_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__5__SHIFT))

#define Switch_3_10_Control_6			(Switch_3_10_Control__6__PC)
#define Switch_3_10_Control_6_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__6__SHIFT))

#define Switch_3_10_Control_7			(Switch_3_10_Control__7__PC)
#define Switch_3_10_Control_7_INTR	((uint16)((uint16)0x0001u << Switch_3_10_Control__7__SHIFT))

#define Switch_3_10_Control_INTR_ALL	 ((uint16)(Switch_3_10_Control_0_INTR| Switch_3_10_Control_1_INTR| Switch_3_10_Control_2_INTR| Switch_3_10_Control_3_INTR| Switch_3_10_Control_4_INTR| Switch_3_10_Control_5_INTR| Switch_3_10_Control_6_INTR| Switch_3_10_Control_7_INTR))

#endif /* End Pins Switch_3_10_Control_ALIASES_H */


/* [] END OF FILE */
