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
#include "protocol.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <sd.h>
#include <DataProcess.h>
#include <string.h>

static const uint8 protocol_init_ready[]="MOD INIT 1";

static protocol_buffer_stu_t pto = {{0},0,0};

void protocol_start(void)
{
    UART_Start();
    memset((void *)&pto,0,sizeof(pto));
    UART_PutString((void *)protocol_init_ready);
}

bool protocol_get_cmd_from_host(void)
{
    uint8_t byte = 0;
    if (UART_GetRxBufferSize()) {
        byte = UART_GetByte();
        pto.buffer[pto.write++] = byte; 
        if(pto.write >= PROTOCOL_MAX_BUFFER_SIZE) {
            pto.write = 0;
        }
    }
    
    return byte == 0 ? true: false;
}

/*static int protocol_memcmp(uint16 index, uint8 * src, uint16 size)
{
    uint16 i = 0;
    uint16 t = index;
    uint16 length = size;
    
    while(size){
        if (index >= PROTOCOL_MAX_BUFFER_SIZE) {
            index  = 0;
        }
        if (pto.buffer[index] - src[i]) {
            return (pto.buffer[index] - src[i]);
        }
        size--;
        index++;
        i++;
    }
    
    while(length--) {
        if (t >= PROTOCOL_MAX_BUFFER_SIZE) {
            t  = 0;
        }
        pto.buffer[t++] = 0;
    }
    
    return 0;
}*/

bool protocol_cmd_compare()
{
    uint8 state = 'K';
    int i=0;
    uint8 value[50]={0};
    int j = 0;
    uint32 *v = 0;
    uint32 *p = NULL;
    
    /* Filter noise data */
    do {
        
        if(pto.buffer[pto.read] == 'K'){
            //sd_open_all_case();
            state = pto.buffer[pto.read+1];
            switch(state) {
             /*   case 'A':                                          //调零(18个箱体不用)
                    if(pto.buffer[pto.read+2]==':'){
                        if(pto.buffer[pto.read+3]=='0'){
                            SBA5ZERQ_Write(0);
                        }
                        else if(pto.buffer[pto.read+3]=='1'){
                            SBA5ZERQ_Write(1);
                        }
                    }
                break;    */
                case 'B':                                            //出气
                    if(pto.buffer[pto.read+2]==':'){
                        if(pto.buffer[pto.read+3]=='0'){
                            ZeroGasOut_Write(0);
                        }
                        else if(pto.buffer[pto.read+3]=='1'){
                            ZeroGasOut_Write(1);
                        }
                    }
                break;
                case 'C':                                           //打开1个箱体(1-9,A-I:10-18号箱)
                    if(pto.buffer[pto.read+2]==':'){
                        if(pto.buffer[pto.read+3] =='0'){
                            sd_open_all_case();
                        }else{
                            sd_open_one_case(pto.buffer[pto.read+3]);
                            UART_PutChar(pto.buffer[pto.read+3]);
                        }
              
                    }

                break;
                case 'D':                                           //关闭1个箱体(1-9,A-I:10-18号箱)
                    if(pto.buffer[pto.read+2]==':'){
                        sd_close_one_case((int)pto.buffer[pto.read+3]);
                        UART_PutChar((int)pto.buffer[pto.read+3]);
                    }
                break;
                case 'E':                                           //CO2校准参数
                    if(pto.buffer[pto.read+2]==':'){
                       /* for(int a=0;a<4;a++){
                            for( j = 0;j<8;j++){ 
                                value[i++] = pto.buffer[pto.read+3+j];
                            }
                        if(i != 0){
                            for(i = 0u; j < i - 1; j++){
                                *v *= 10;
                                *v += value[j] - '0';
                            }
                            p[a] = *v;
                            UART_PutString((char*)p[a]);
                        }
                        a++;
                        }*/
                        EEPROM_WriteByte(55,EEPROM_ROW_3);
                        UART_PutChar(EEPROM_ReadByte(EEPROM_ROW_3));
                    }
            break;
        case 'F':
           for(int a = 0;a<4;a++)
            {
                for( j = 0;j<8;j++)
                {
                    
                  value[i++] = pto.buffer[pto.read+3+j];
                
                }
                if(i != 0){
                  for(i = 0u; j < i - 1; j++){
                    *v *= 10;
                    
                    *v += value[j] - '0';
                    }
                  p[a] = *v;
                UART_PutString((char*)p[a]);
            }
                a++;
            }
            DataSaveItemIntoEEPROM(EEPROM_ROW_3, (uint8 *)p);
            break;
        case 'G':
           for(int a = 0;a<4;a++)
            {
                for( j = 0;j<8;j++)
                {
                    
                  value[i++] = pto.buffer[pto.read+3+j];
                
                }
                if(i != 0){
                  for(i = 0u; j < i - 1; j++){
                    *v *= 10;
                    
                    *v += value[j] - '0';
                    }
                  p[a] = *v;
            }
                a++;
            }
            DataSaveItemIntoEEPROM(EEPROM_ROW_4, (uint8 *)p);
            break;
        case 'H':
           for(int a = 0;a<4;a++)
            {
                for( j = 0;j<8;j++)
                {
                    
                  value[i++] = pto.buffer[pto.read+3+j];
                
                }
                if(i != 0){
                  for(i = 0u; j < i - 1; j++){
                    *v *= 10;
                    
                    *v += value[j] - '0';
                    }
                  p[a] = *v;
            }
                a++;
            }
            DataSaveItemIntoEEPROM(EEPROM_ROW_5, (uint8 *)p);
            break;  
        case 'I':
           for(int a = 0;a<4;a++)
            {
                for( j = 0;j<8;j++)
                {
                    
                  value[i++] = pto.buffer[pto.read+3+j];
                
                }
                if(i != 0){
                  for(i = 0u; j < i - 1; j++){
                    *v *= 10;
                    
                    *v += value[j] - '0';
                    }
                  p[a] = *v;
            }
                a++;
            }
            DataSaveItemIntoEEPROM(EEPROM_ROW_6, (uint8 *)p);
            break;  
        case 'J':
           for(int a = 0;a<4;a++)
            {
                for( j = 0;j<8;j++)
                {
                    
                  value[i++] = pto.buffer[pto.read+3+j];
                
                }
                if(i != 0){
                  for(i = 0u; j < i - 1; j++){
                    *v *= 10;
                    
                    *v += value[j] - '0';
                    }
                  p[a] = *v;
            }
                a++;
            }
            DataSaveItemIntoEEPROM(EEPROM_ROW_7, (uint8 *)p);
            break;   
        }
        }
        pto.buffer[pto.read] = 0;
        pto.read++;
        if (pto.read >= PROTOCOL_MAX_BUFFER_SIZE) {
            pto.read = 00;
        }
    }while(pto.buffer[pto.read] != 0);
    return false;
}

void protocol_process()
{
    bool ret = false;
    
    ret = protocol_get_cmd_from_host();
    if (false == ret) {
        return;
    }

    ret = protocol_cmd_compare();
}

/* [] END OF FILE */
