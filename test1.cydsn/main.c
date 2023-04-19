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
#include "project.h"
#include <sd.h>
#include <protocol.h>
#include <string.h>


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   // protocol_start();
    //UART_ClearRxBuffer();
    //sd_open_all_case();
    //EEPROM_Start();
    UART_Start();
    
    
    for(;;)
     { 
       /* Place your application code here. */
      // protocol_process();
       //protocol_cmd_compare();
      //EEPROM_WriteByte(55,98);
         UART_PutChar('s');
    }
    
}

/* [] END OF FILE */
