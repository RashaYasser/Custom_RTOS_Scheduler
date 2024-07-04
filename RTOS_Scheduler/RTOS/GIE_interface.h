/*
 ============================================================================
 Module      : GIE driver
 Name        : GIE_program.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : Global interrupt enable
 Date        : 7/4/2023
 ============================================================================
 */
#ifndef  GIE_INTERFACE_H
#define  GIE_INTERFACE_H

#define  SREG    (* (volatile u8 *) (0X5F ) ) 

void  GIE_voidEnable(void) ;
void  GIE_voidDisable(void) ;


#endif
