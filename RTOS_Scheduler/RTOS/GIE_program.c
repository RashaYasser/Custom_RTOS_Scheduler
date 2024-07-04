/*
 ============================================================================
 Module      : GIE driver
 Name        : GIE_program.c
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : Global interrupt enable
 Date        : 7/4/2023
 ============================================================================
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GIE_interface.h"


void  GIE_voidEnable(void)
{
	SET_BIT(SREG , 7 ) ;
}

void  GIE_voidDisable(void){
	CLEAR_BIT(SREG , 7 ) ;
}
