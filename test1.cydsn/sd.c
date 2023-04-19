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
#include <sd.h>
#include <stdio.h>
#include <main.h>
//#include <UART.h>


//此段代码输入的类型只能为int
/*
void sd_Control_from_PC( uint8 index ){                        //只能打开0-18其中一个箱体
    
    if( (index==1) || (index==2) ){
        if( (Switch_1_2_Control_Read()& CASE_TWO_MASK) != CLOSE_ONE_CASE<<(index-1) ){
            Switch_1_2_Control_Write(((CLOSE_ONE_CASE << (index - 1)) & CASE_TWO_MASK) );
        }
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }
    else if( (index==11) || (index==12) ){
        if( (Switch_11_12_Control_Read()& CASE_TWO_MASK) != CLOSE_ONE_CASE<<(index-11) ){
            Switch_11_12_Control_Write(((CLOSE_ONE_CASE << (index - 11)) & CASE_TWO_MASK) );
        }
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }
    else if( (index==13) || (index==14) ){
        if( (Switch_13_14_Control_Read()& CASE_TWO_MASK) != CLOSE_ONE_CASE<<(index-13) ){
            Switch_13_14_Control_Write(((CLOSE_ONE_CASE << (index - 13)) & CASE_TWO_MASK) );
        }
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }
    else if( index==15 ){
        
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(CLOSE_ONE_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }
     else if( index==16 ){
        
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(CLOSE_ONE_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }
    else if( index==17 ){
        
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(CLOSE_ONE_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
        
    }
    else if( index==18 ){
        
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(CLOSE_ONE_CASE);
        
    }
    else if( (index>2) & (index<11)){
        if ( Switch_3_10_Control_Read() != ( CLOSE_ONE_CASE << (index - 3)) )
        {
            Switch_3_10_Control_Write(CLOSE_ONE_CASE << (index - 3));
            Switch_1_2_Control_Write(OPEN_ALL_CASE);
            Switch_11_12_Control_Write(OPEN_ALL_CASE);
            Switch_13_14_Control_Write(OPEN_ALL_CASE);
            Switch_15_Control_Write(OPEN_ALL_CASE);
            Switch_16_Control_Write(OPEN_ALL_CASE);
            Switch_17_Control_Write(OPEN_ALL_CASE);
            Switch_18_Control_Write(OPEN_ALL_CASE);
        }
    }
    else{
        Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
    }

}

void sd_open_all_case(){                                          //打开所有箱体(输入类型为int(?))
    Switch_1_2_Control_Write(OPEN_ALL_CASE);
        Switch_3_10_Control_Write(OPEN_ALL_CASE);
        Switch_11_12_Control_Write(OPEN_ALL_CASE);
        Switch_13_14_Control_Write(OPEN_ALL_CASE);
        Switch_15_Control_Write(OPEN_ALL_CASE);
        Switch_16_Control_Write(OPEN_ALL_CASE);
        Switch_17_Control_Write(OPEN_ALL_CASE);
        Switch_18_Control_Write(OPEN_ALL_CASE);
}

void sd_close_one_case(uint8 index){                              //单独关闭箱体，与其他箱体互不影响(输入类型为int(?))
    if((index=='1') || (index=='2')){
        Switch_1_2_Control_Write((Switch_1_2_Control_Read() | (CLOSE_ONE_CASE<<(((int)index-1)))));
    }
    else if((index==11) || (index==12)){
            Switch_11_12_Control_Write((Switch_11_12_Control_Read() | (CLOSE_ONE_CASE<<(index-11))));
   }
    else if((index==13) || (index==14)){
        Switch_13_14_Control_Write((Switch_13_14_Control_Read() | (CLOSE_ONE_CASE<<(index-13))));
   }
    else if(index==15){
        Switch_15_Control_Write(CLOSE_ONE_CASE);
   }
    else if(index==16){
        Switch_16_Control_Write(CLOSE_ONE_CASE);
   }
    else if(index==17){
        Switch_17_Control_Write(CLOSE_ONE_CASE);
   }
    else if(index==18){
        Switch_18_Control_Write(CLOSE_ONE_CASE);
   }
   else if( (index>2) & (index<11)){

            Switch_3_10_Control_Write((Switch_3_10_Control_Read() | (CLOSE_ONE_CASE<<(index-3))));
   } 
}

void sd_open_one_case(uint8 index){                              //单独打开箱体，与其他箱体互不影响(输入类型为int(?))
    if((index==1) || (index==2)){
        Switch_1_2_Control_Write(((Switch_1_2_Control_Read()) & (OPEN_ONE_CASE>>(index+5))));
    }
    else if((index==11) || (index==12)){
        Switch_11_12_Control_Write((Switch_11_12_Control_Read() & (OPEN_ONE_CASE>>(index-5))));
   }
    else if((index==13) || (index==14)){
        Switch_13_14_Control_Write((Switch_13_14_Control_Read() & (OPEN_ONE_CASE>>(index-7))));
   }
    else if(index==15){
        Switch_15_Control_Write(OPEN_ALL_CASE);
   }
    else if(index==16){
        Switch_16_Control_Write(OPEN_ALL_CASE);
   }
    else if(index==17){
        Switch_17_Control_Write(OPEN_ALL_CASE);
   }
    else if(index==18){
        Switch_18_Control_Write(OPEN_ALL_CASE);
   }
   else if( (index>2) & (index<11)){

            Switch_3_10_Control_Write((Switch_3_10_Control_Read() ^ (OPEN_ONE_CASE>>(index-2))));
   } 
}
*/

void sd_open_one_case(char Index)                               //单独控制打开1个箱体
{
    switch(Index)
    {
        case '1': 
            Switch_1_Control_Write(0);
            break;
         case '2': 
            Switch_2_Control_Write(0);
            break;
         case '3': 
            Switch_3_Control_Write(0);
            break;
         case '4': 
            Switch_4_Control_Write(0);
            break;
         case '5': 
            Switch_5_Control_Write(0);
            break;
         case '6': 
            Switch_6_Control_Write(0);
            break;
         case '7': 
            Switch_7_Control_Write(0);
            break;
         case '8': 
            Switch_8_Control_Write(0);
            break;
         case '9': 
            Switch_9_Control_Write(0);
            break;
         case 'A': 
            Switch_10_Control_Write(0);
            break;
         case 'B': 
            Switch_11_Control_Write(0);
            break;
         case 'C': 
            Switch_12_Control_Write(0);
            break;
         case 'D': 
            Switch_13_Control_Write(0);
            break;
         case 'F': 
            Switch_14_Control_Write(0);
            break;
         case 'G': 
            Switch_15_Control_Write(0);
            break; 
         case 'H': 
            Switch_16_Control_Write(0);
            break;
         case 'I': 
            Switch_17_Control_Write(0);
            break;
         case 'J': 
            Switch_18_Control_Write(0);
            break;
    }
}

void sd_close_one_case(char Index)                                //单独控制关闭1个箱体
{
    switch(Index)
    {
         case '1': 
            Switch_1_Control_Write(1);
            break;
         case '2': 
            Switch_2_Control_Write(1);
            break;
         case '3': 
            Switch_3_Control_Write(1);
            break;
         case '4': 
            Switch_4_Control_Write(1);
            break;
         case '5': 
            Switch_5_Control_Write(1);
            break;
         case '6': 
            Switch_6_Control_Write(1);
            break;
         case '7': 
            Switch_7_Control_Write(1);
            break;
         case '8': 
            Switch_8_Control_Write(1);
            break;
         case '9': 
            Switch_9_Control_Write(1);
            break;
         case 'A': 
            Switch_10_Control_Write(1);
            break;
         case 'B': 
            Switch_11_Control_Write(1);
            break;
         case 'C': 
            Switch_12_Control_Write(1);
            break;
         case 'D': 
            Switch_13_Control_Write(1);
            break;
         case 'E': 
            Switch_14_Control_Write(1);
            break;
         case 'F': 
            Switch_15_Control_Write(1);
            break; 
         case 'G': 
            Switch_16_Control_Write(1);
            break;
         case 'H': 
            Switch_17_Control_Write(1);
            break;
         case 'I': 
            Switch_18_Control_Write(1);
            break;
    }
}
void sd_open_all_case()//打开所有箱体
{
    Switch_1_Control_Write(0);
    Switch_2_Control_Write(0);
    Switch_3_Control_Write(0);
    Switch_4_Control_Write(0);
    Switch_5_Control_Write(0);
    Switch_6_Control_Write(0);  
    Switch_7_Control_Write(0);
    Switch_8_Control_Write(0);
    Switch_9_Control_Write(0);
    Switch_10_Control_Write(0);
    Switch_11_Control_Write(0);
    Switch_12_Control_Write(0);
    Switch_13_Control_Write(0);
    Switch_14_Control_Write(0);
    Switch_15_Control_Write(0);
    Switch_16_Control_Write(0);
    Switch_17_Control_Write(0);
    Switch_18_Control_Write(0);
    
    
}

/* [] END OF FILE */
