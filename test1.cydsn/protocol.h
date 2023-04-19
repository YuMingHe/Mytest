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
#ifndef __PROTOCOL_H__
#define __PROTOCOL_H__

#include <project.h>
#include <stdbool.h>
    
#define PROTOCOL_MAX_BUFFER_SIZE             (256)    


    
typedef struct{
    uint8 *cmd_str;
    char cmd;
}protocol_cmd_stu_t;

typedef struct{
    uint8 buffer[PROTOCOL_MAX_BUFFER_SIZE];
    uint16 write;
    uint16 read;
}protocol_buffer_stu_t;

extern void protocol_start(void);
extern void protocol_process(void);
extern bool protocol_get_cmd_from_host(void);
extern bool protocol_cmd_compare();

#endif   
/* [] END OF FILE */
