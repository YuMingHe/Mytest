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
#include <project.h>
#include <DataProcess.h>
#include <main.h>

DATA_CONVERSION_S dataConversionParameters ={
    {1,0,0,1},                  /* Row 2 */
    {1,0,0,1},                  /* Row 3 */
    {1,0,0,1},                  /* Row 4 */
    {1,0,0,1},                  /* Row 5 */
    {1,0,0,1},                  /* Row 6 */
    {1,0,0,1},                  /* Row 7 */
};

void DataSaveItemIntoEEPROM(uint32 row, uint8 *data)
{
    EEPROM_UpdateTemperature();
    
    if(NULL == data){
        return;
    }
    
    EEPROM_Write(data, row);
}

void DataGetItemFromEEPROM(uint32 row, uint8 *data)
{
    uint32 i = 0u;
    
    if(NULL == data){
        return;
    }
    
    for(i = 0u; i < CYDEV_EEPROM_ROW_SIZE; i++){
        data[i] = EEPROM_ReadByte(row * CYDEV_EEPROM_ROW_SIZE + i);
    }
}

uint32 DataProcess(uint32 x, DATA_ITEM_E item)
{
    DATA_CONVERSION_ITEM_S dataConversionItem;
    uint32 a = 0u;
    uint32 b = 0u;
    uint32 c = 0u;
    uint32 d = 0u;
    
    switch (item)
    {
    case DATA_ITEM_CO2:
        dataConversionItem = dataConversionParameters.co2;
        break;
    case DATA_ITEM_H2O:
        dataConversionItem = dataConversionParameters.h2o;
        break;
    case DATA_ITEM_T:
        dataConversionItem = dataConversionParameters.t;
        break;
    case DATA_ITEM_RH:
        dataConversionItem = dataConversionParameters.rh;
        break;
    case DATA_ITEM_PA:
        dataConversionItem = dataConversionParameters.pa;
        break;
    case DATA_ITEM_PPFD:
        dataConversionItem = dataConversionParameters.ppfd;
        break;
    default:
        break;
    }
    
    a = dataConversionItem.a;
    b = dataConversionItem.b;
    c = dataConversionItem.c;
    d = dataConversionItem.d;
    
    if(0u == a || 0u == d){
        return x;
    }else{
        return ((a * (float64)x + b - c ) / (float64)d);
    }
}

void dataConversionParametersInit(void)
{
    memcpy((void *)&dataConversionParameters, (void *)(CYDEV_EE_BASE + EEPROM_ROW_2 * CYDEV_EEPROM_ROW_SIZE), sizeof(DATA_CONVERSION_S));
}


/* [] END OF FILE */
