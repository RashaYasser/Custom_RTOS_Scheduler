/*
 ============================================================================
 Module      : Timer0 driver
 Name        : TIMER0_config.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : config file for interface  timer driver
 Date        : 7/4/2023
 ============================================================================
 */

#ifndef  TIMER0_CONFIG_H
#define  TIMER0_CONFIG_H
/*
 * Clock Frequency (F_CPU) = 16 MHz
 * Prescaler = 64
 * Desired Interval = 1 ms
 * Tick_Time=(16*10^6)/(64*0.001)=250
 *
 * */
#define TIMER0_PreScaller  PRE_64    /* set pre_scaler*/

#define TIMER0_compareValue  250 	/* set compare value*/

#endif 
