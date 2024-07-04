/*
 ============================================================================
 Name        : main.c
 Layer       : APP
 Author      : RASHA_YASSER
 Date        : 7/4/2024
 ============================================================================
 */

#include "BIT_MATH.h"           // Bit manipulation macros
#include "STD_TYPES.h"          // Standard data types
#include "interface.h"          // DIO interface
#include "EXTINT_interface.h"   // External Interrupt interface
#include <util/delay.h>         // Delay functions
//#include "TIMER0_interface.h"   // Timer0 For RTOS Stack interface
#include "RTOS_interface.h"     // RTOS interface
#include "GIE_interface.h"      // Global interrupt
#include "lcd_interface.h"      // lcd interface
#include"timer_interface.h"     // general purpose timer interface
void Task_1(void);
void Task_2(void);
void Task_3(void);
void Task_4(void);
void Task_5(void);
void Suspend_LCD(void);
int main()
{
    // Initialize necessary modules
	DIO_u8IntialDirection();
	DIO_u8IntialValue();
	LCD_voidInitial();
	LCD_voidSendStr("Farida");
	TMR1_voidInit();
	TMR1_voidSetICR(19999);

	DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_PIN_HIGH);
	EXTINT_voidEnable(EXTINT_INT0,EXTINT_FALLING_EDGE);
	EXTINT_voidSetCallBack(&Suspend_LCD,EXTINT_INT0);

    // Create tasks for the RTOS
	RTOS_voidCreateTask(0,1000,&Task_1);
	RTOS_voidCreateTask(1,2000,&Task_2);
	RTOS_voidCreateTask(2,5000,&Task_3);
	RTOS_voidCreateTask(3,300 ,&Task_4);
	RTOS_voidCreateTask(4,1000,&Task_5);

    // Start the RTOS scheduler
	RTOS_voidStart();
	while(1);
	return 0;
}

// Task definitions
void Task_1(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		flag = 0;
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_PIN_LOW);
	}
}
void Task_2(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		flag = 0;
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_PIN_LOW);
	}
}
void Task_3(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_PIN_HIGH);
		flag = 1;
	}
	else
	{
		flag = 0;
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_PIN_LOW);
	}
}
void Task_4(void)
{
	static u16 counter = 999;
	counter+=100;
	if(counter == 1999)
	{
		counter = 999;
	}
	TMR1_voidSetCompareMatch(counter);
}
void Task_5(void)
{
	static u8 counter = 0;
	counter++;
	LCD_voidShift(LCD_u8_RIGHT);
	if(counter == 9)
	{
		LCD_voidClear();
		LCD_voidGoToXY(LCD_u8_LINE0,0);
		LCD_voidSendStr("Farida");
		counter = 0;
	}
}

void Suspend_LCD(void)
{
	static u8 Local_u8Counter =0 ;
	Local_u8Counter++;
	if(Local_u8Counter == 1)
	{
		RTOS_voidPauseTask(4);

	}
	else if(Local_u8Counter == 2)
	{
		RTOS_voidResumeTask(4);
		Local_u8Counter = 0 ;
	}
	else
	{

	}
}