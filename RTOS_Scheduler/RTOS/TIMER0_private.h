/*
 ============================================================================
 Module      : Timer0 driver
 Name        : TIMER0_Private.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : private file for interface  timer driver
 Date        : 7/4/2023
 ============================================================================
 */
#ifndef  TIMER0_PRIVATE_H
#define  TIMER0_PRIVATE_H


#define PRE_1        1
#define PRE_8        2
#define PRE_64       3
#define PRE_256      4
#define PRE_1024     5

#define OCR0_u8_REG      *((volatile u8*)0x5C)

#define TIMSK_u8_REG     *((volatile u8*)0x59)

#define TIFR_u8_REG      *((volatile u8*)0x58)

#define TCNT0_u8_REG     *((volatile u8*)0x52)

#define TCCR0_u8_REG     *((volatile u8*)0x53)

#define TCCR1A_u8_REG    *((volatile u8*)0x4F)

#define TCCR1B_u8_REG    *((volatile u8*)0x4E)

#define TCNT1LH_u16_REG  *((volatile u16*)0x4C)

#define OCR1ALH_u16_REG  *((volatile u16*)0x4A)

#define OCR1BLH_u16_REG  *((volatile u16*)0x48)

#define ICR1LH_u16_REG   *((volatile u16*)0x46)



#endif