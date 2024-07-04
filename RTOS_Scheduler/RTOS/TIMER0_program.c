/*
 ============================================================================
 Module      : Timer0 driver
 Name        : TIMER0_interface.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : Generic Timer for RTOS stack
 Date        : 7/4/2023
 ============================================================================
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include<avr/io.h>
#include"TIMER0_config.h"
#include"TIMER0_interface.h"
#include"TIMER0_private.h"

static void (*Timer0_pvCompMatchCallBakFunc)(void)=NULL;

void TIMER0_voidInit(void)
{   /* Initialize Timer0 to work in CTC mode */
    TCCR0 |= (1 << FOC0) | (1 << WGM01);

    /* Clear all prescaler bits */
    TCCR0 &= ~(0x07);

    /* Set the desired prescaler value */
    TCCR0 |= TIMER0_PreScaller;

    /* Set the compare value for CTC mode */
    OCR0 = TIMER0_compareValue;

    /* Enable the compare match interrupt for Timer0 */
    TIMSK |= (1 << OCIE0);
}

u8 TIMER0_compMatchSetCallBack(void(*Copy_PvCallBackFunc)(void))
{
	u8 LocalErrorState=OK;
    /* Check if the provided pointer is valid */
	if(Copy_PvCallBackFunc !=NULL)
	{
        /* Save the callback function in the global pointer */
		Timer0_pvCompMatchCallBakFunc=Copy_PvCallBackFunc;
	}
	else
	{
        /* Return an error state if the pointer is NULL */
		LocalErrorState=NOT_OK;
	}
	return LocalErrorState;

}


/*Timer0 CTC ISR*/
void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
	if(Timer0_pvCompMatchCallBakFunc !=NULL)
	{

		Timer0_pvCompMatchCallBakFunc();
	}
	else
	{
		/*Do Nothing*/
	}
}

