/*******************************************************************************
* File Name: SBA5ZERQ.h  
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

#if !defined(CY_PINS_SBA5ZERQ_H) /* Pins SBA5ZERQ_H */
#define CY_PINS_SBA5ZERQ_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SBA5ZERQ_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SBA5ZERQ__PORT == 15 && ((SBA5ZERQ__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SBA5ZERQ_Write(uint8 value);
void    SBA5ZERQ_SetDriveMode(uint8 mode);
uint8   SBA5ZERQ_ReadDataReg(void);
uint8   SBA5ZERQ_Read(void);
void    SBA5ZERQ_SetInterruptMode(uint16 position, uint16 mode);
uint8   SBA5ZERQ_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SBA5ZERQ_SetDriveMode() function.
     *  @{
     */
        #define SBA5ZERQ_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SBA5ZERQ_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SBA5ZERQ_DM_RES_UP          PIN_DM_RES_UP
        #define SBA5ZERQ_DM_RES_DWN         PIN_DM_RES_DWN
        #define SBA5ZERQ_DM_OD_LO           PIN_DM_OD_LO
        #define SBA5ZERQ_DM_OD_HI           PIN_DM_OD_HI
        #define SBA5ZERQ_DM_STRONG          PIN_DM_STRONG
        #define SBA5ZERQ_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SBA5ZERQ_MASK               SBA5ZERQ__MASK
#define SBA5ZERQ_SHIFT              SBA5ZERQ__SHIFT
#define SBA5ZERQ_WIDTH              1u

/* Interrupt constants */
#if defined(SBA5ZERQ__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SBA5ZERQ_SetInterruptMode() function.
     *  @{
     */
        #define SBA5ZERQ_INTR_NONE      (uint16)(0x0000u)
        #define SBA5ZERQ_INTR_RISING    (uint16)(0x0001u)
        #define SBA5ZERQ_INTR_FALLING   (uint16)(0x0002u)
        #define SBA5ZERQ_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SBA5ZERQ_INTR_MASK      (0x01u) 
#endif /* (SBA5ZERQ__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SBA5ZERQ_PS                     (* (reg8 *) SBA5ZERQ__PS)
/* Data Register */
#define SBA5ZERQ_DR                     (* (reg8 *) SBA5ZERQ__DR)
/* Port Number */
#define SBA5ZERQ_PRT_NUM                (* (reg8 *) SBA5ZERQ__PRT) 
/* Connect to Analog Globals */                                                  
#define SBA5ZERQ_AG                     (* (reg8 *) SBA5ZERQ__AG)                       
/* Analog MUX bux enable */
#define SBA5ZERQ_AMUX                   (* (reg8 *) SBA5ZERQ__AMUX) 
/* Bidirectional Enable */                                                        
#define SBA5ZERQ_BIE                    (* (reg8 *) SBA5ZERQ__BIE)
/* Bit-mask for Aliased Register Access */
#define SBA5ZERQ_BIT_MASK               (* (reg8 *) SBA5ZERQ__BIT_MASK)
/* Bypass Enable */
#define SBA5ZERQ_BYP                    (* (reg8 *) SBA5ZERQ__BYP)
/* Port wide control signals */                                                   
#define SBA5ZERQ_CTL                    (* (reg8 *) SBA5ZERQ__CTL)
/* Drive Modes */
#define SBA5ZERQ_DM0                    (* (reg8 *) SBA5ZERQ__DM0) 
#define SBA5ZERQ_DM1                    (* (reg8 *) SBA5ZERQ__DM1)
#define SBA5ZERQ_DM2                    (* (reg8 *) SBA5ZERQ__DM2) 
/* Input Buffer Disable Override */
#define SBA5ZERQ_INP_DIS                (* (reg8 *) SBA5ZERQ__INP_DIS)
/* LCD Common or Segment Drive */
#define SBA5ZERQ_LCD_COM_SEG            (* (reg8 *) SBA5ZERQ__LCD_COM_SEG)
/* Enable Segment LCD */
#define SBA5ZERQ_LCD_EN                 (* (reg8 *) SBA5ZERQ__LCD_EN)
/* Slew Rate Control */
#define SBA5ZERQ_SLW                    (* (reg8 *) SBA5ZERQ__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SBA5ZERQ_PRTDSI__CAPS_SEL       (* (reg8 *) SBA5ZERQ__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SBA5ZERQ_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SBA5ZERQ__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SBA5ZERQ_PRTDSI__OE_SEL0        (* (reg8 *) SBA5ZERQ__PRTDSI__OE_SEL0) 
#define SBA5ZERQ_PRTDSI__OE_SEL1        (* (reg8 *) SBA5ZERQ__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SBA5ZERQ_PRTDSI__OUT_SEL0       (* (reg8 *) SBA5ZERQ__PRTDSI__OUT_SEL0) 
#define SBA5ZERQ_PRTDSI__OUT_SEL1       (* (reg8 *) SBA5ZERQ__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SBA5ZERQ_PRTDSI__SYNC_OUT       (* (reg8 *) SBA5ZERQ__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SBA5ZERQ__SIO_CFG)
    #define SBA5ZERQ_SIO_HYST_EN        (* (reg8 *) SBA5ZERQ__SIO_HYST_EN)
    #define SBA5ZERQ_SIO_REG_HIFREQ     (* (reg8 *) SBA5ZERQ__SIO_REG_HIFREQ)
    #define SBA5ZERQ_SIO_CFG            (* (reg8 *) SBA5ZERQ__SIO_CFG)
    #define SBA5ZERQ_SIO_DIFF           (* (reg8 *) SBA5ZERQ__SIO_DIFF)
#endif /* (SBA5ZERQ__SIO_CFG) */

/* Interrupt Registers */
#if defined(SBA5ZERQ__INTSTAT)
    #define SBA5ZERQ_INTSTAT            (* (reg8 *) SBA5ZERQ__INTSTAT)
    #define SBA5ZERQ_SNAP               (* (reg8 *) SBA5ZERQ__SNAP)
    
	#define SBA5ZERQ_0_INTTYPE_REG 		(* (reg8 *) SBA5ZERQ__0__INTTYPE)
#endif /* (SBA5ZERQ__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SBA5ZERQ_H */


/* [] END OF FILE */
