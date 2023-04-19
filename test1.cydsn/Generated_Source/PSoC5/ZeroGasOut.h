/*******************************************************************************
* File Name: ZeroGasOut.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_ZeroGasOut_H) /* Pins ZeroGasOut_H */
#define CY_PINS_ZeroGasOut_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ZeroGasOut_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ZeroGasOut__PORT == 15 && ((ZeroGasOut__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ZeroGasOut_Write(uint8 value);
void    ZeroGasOut_SetDriveMode(uint8 mode);
uint8   ZeroGasOut_ReadDataReg(void);
uint8   ZeroGasOut_Read(void);
void    ZeroGasOut_SetInterruptMode(uint16 position, uint16 mode);
uint8   ZeroGasOut_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ZeroGasOut_SetDriveMode() function.
     *  @{
     */
        #define ZeroGasOut_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ZeroGasOut_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ZeroGasOut_DM_RES_UP          PIN_DM_RES_UP
        #define ZeroGasOut_DM_RES_DWN         PIN_DM_RES_DWN
        #define ZeroGasOut_DM_OD_LO           PIN_DM_OD_LO
        #define ZeroGasOut_DM_OD_HI           PIN_DM_OD_HI
        #define ZeroGasOut_DM_STRONG          PIN_DM_STRONG
        #define ZeroGasOut_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ZeroGasOut_MASK               ZeroGasOut__MASK
#define ZeroGasOut_SHIFT              ZeroGasOut__SHIFT
#define ZeroGasOut_WIDTH              1u

/* Interrupt constants */
#if defined(ZeroGasOut__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ZeroGasOut_SetInterruptMode() function.
     *  @{
     */
        #define ZeroGasOut_INTR_NONE      (uint16)(0x0000u)
        #define ZeroGasOut_INTR_RISING    (uint16)(0x0001u)
        #define ZeroGasOut_INTR_FALLING   (uint16)(0x0002u)
        #define ZeroGasOut_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ZeroGasOut_INTR_MASK      (0x01u) 
#endif /* (ZeroGasOut__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ZeroGasOut_PS                     (* (reg8 *) ZeroGasOut__PS)
/* Data Register */
#define ZeroGasOut_DR                     (* (reg8 *) ZeroGasOut__DR)
/* Port Number */
#define ZeroGasOut_PRT_NUM                (* (reg8 *) ZeroGasOut__PRT) 
/* Connect to Analog Globals */                                                  
#define ZeroGasOut_AG                     (* (reg8 *) ZeroGasOut__AG)                       
/* Analog MUX bux enable */
#define ZeroGasOut_AMUX                   (* (reg8 *) ZeroGasOut__AMUX) 
/* Bidirectional Enable */                                                        
#define ZeroGasOut_BIE                    (* (reg8 *) ZeroGasOut__BIE)
/* Bit-mask for Aliased Register Access */
#define ZeroGasOut_BIT_MASK               (* (reg8 *) ZeroGasOut__BIT_MASK)
/* Bypass Enable */
#define ZeroGasOut_BYP                    (* (reg8 *) ZeroGasOut__BYP)
/* Port wide control signals */                                                   
#define ZeroGasOut_CTL                    (* (reg8 *) ZeroGasOut__CTL)
/* Drive Modes */
#define ZeroGasOut_DM0                    (* (reg8 *) ZeroGasOut__DM0) 
#define ZeroGasOut_DM1                    (* (reg8 *) ZeroGasOut__DM1)
#define ZeroGasOut_DM2                    (* (reg8 *) ZeroGasOut__DM2) 
/* Input Buffer Disable Override */
#define ZeroGasOut_INP_DIS                (* (reg8 *) ZeroGasOut__INP_DIS)
/* LCD Common or Segment Drive */
#define ZeroGasOut_LCD_COM_SEG            (* (reg8 *) ZeroGasOut__LCD_COM_SEG)
/* Enable Segment LCD */
#define ZeroGasOut_LCD_EN                 (* (reg8 *) ZeroGasOut__LCD_EN)
/* Slew Rate Control */
#define ZeroGasOut_SLW                    (* (reg8 *) ZeroGasOut__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ZeroGasOut_PRTDSI__CAPS_SEL       (* (reg8 *) ZeroGasOut__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ZeroGasOut_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ZeroGasOut__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ZeroGasOut_PRTDSI__OE_SEL0        (* (reg8 *) ZeroGasOut__PRTDSI__OE_SEL0) 
#define ZeroGasOut_PRTDSI__OE_SEL1        (* (reg8 *) ZeroGasOut__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ZeroGasOut_PRTDSI__OUT_SEL0       (* (reg8 *) ZeroGasOut__PRTDSI__OUT_SEL0) 
#define ZeroGasOut_PRTDSI__OUT_SEL1       (* (reg8 *) ZeroGasOut__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ZeroGasOut_PRTDSI__SYNC_OUT       (* (reg8 *) ZeroGasOut__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ZeroGasOut__SIO_CFG)
    #define ZeroGasOut_SIO_HYST_EN        (* (reg8 *) ZeroGasOut__SIO_HYST_EN)
    #define ZeroGasOut_SIO_REG_HIFREQ     (* (reg8 *) ZeroGasOut__SIO_REG_HIFREQ)
    #define ZeroGasOut_SIO_CFG            (* (reg8 *) ZeroGasOut__SIO_CFG)
    #define ZeroGasOut_SIO_DIFF           (* (reg8 *) ZeroGasOut__SIO_DIFF)
#endif /* (ZeroGasOut__SIO_CFG) */

/* Interrupt Registers */
#if defined(ZeroGasOut__INTSTAT)
    #define ZeroGasOut_INTSTAT            (* (reg8 *) ZeroGasOut__INTSTAT)
    #define ZeroGasOut_SNAP               (* (reg8 *) ZeroGasOut__SNAP)
    
	#define ZeroGasOut_0_INTTYPE_REG 		(* (reg8 *) ZeroGasOut__0__INTTYPE)
#endif /* (ZeroGasOut__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ZeroGasOut_H */


/* [] END OF FILE */
