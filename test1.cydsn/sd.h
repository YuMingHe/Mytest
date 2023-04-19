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
#include <stdio.h>
#include <main.h>
#include <cytypes.h>

#define OPEN_ALL_CASE (0x00)
#define CLOSE_ONE_CASE (0x01)
#define OPEN_ONE_CASE (0x80)

#define CASE_TWO_MASK (0x03)


//extern void sd_Control_from_PC( uint8 index );
extern void sd_close_one_case(char Index);
extern void sd_open_one_case(char Index);
extern void sd_open_all_case();
/* [] END OF FILE */
