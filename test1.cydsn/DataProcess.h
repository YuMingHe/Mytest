/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef __DATAPROCESS_H__
#define __DATAPROCESS_H__
#include <project.h>
    
typedef enum dataItem{
    DATA_ITEM_CO2,
    DATA_ITEM_H2O,
    DATA_ITEM_T,
    DATA_ITEM_RH,
    DATA_ITEM_PA,
    DATA_ITEM_PPFD,
    DATA_ITEM_MAX
}DATA_ITEM_E;
    
/* Data item conversion item */
typedef struct dataConversionItem{
    uint32 a;
    uint32 b;
    uint32 c;
    uint32 d;
}DATA_CONVERSION_ITEM_S;

/* Data conversion item list */
typedef struct dataConversion{
    DATA_CONVERSION_ITEM_S co2;
    DATA_CONVERSION_ITEM_S h2o;
    DATA_CONVERSION_ITEM_S t;
    DATA_CONVERSION_ITEM_S rh;
    DATA_CONVERSION_ITEM_S pa;
    DATA_CONVERSION_ITEM_S ppfd;
}DATA_CONVERSION_S;

extern DATA_CONVERSION_S dataConversionParameters;    
extern uint32 DataProcess(uint32 x, DATA_ITEM_E item);   
extern void DataSaveItemIntoEEPROM(uint32 row, uint8 *data);
extern void DataGetItemFromEEPROM(uint32 row, uint8 *data);
extern void dataConversionParametersInit(void);

#endif    
/* [] END OF FILE */
