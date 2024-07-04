/*
 ============================================================================
 Module      : Timer0 driver
 Name        : TIMER0_interface.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : interface file for interface  timer driver
 Date        : 7/4/2023
 ============================================================================
 */

#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_


/*******************************************************************************
 *                              Functions Prototypes
 *******************************************************************************/
 /*
  *  Description: Initializes Timer0 module in CTC (Clear Timer on Compare Match) mode.
  *  This function initializes Timer0 to operate in CTC mode,Set pre_scaler ,and compare value
  *
  */
void TIMER0_voidInit(void);

/*
 * Description: Sets a callback function to be executed upon Timer0 compare match interrupt.
 *
 * This function allows the user to specify a callback function to be executed
 * when Timer0 generates a compare match interrupt.If the provided pointer points to a valid address (not NULL),
 * the callback function is saved in a global pointer variable Timer0_pvCompMatchCallBakFunc.
 * If the pointer is NULL, indicating an invalid address, the function returns NOT_OK to indicate an error.
 *
 * Parameters:
 *   - Copy_PvCallBackFunc: Pointer to the callback function.
 *
 * Returns:
 *   - OK: If the callback function is successfully set.
 *   - NOT_OK: If the provided pointer is NULL.
 */
u8 TIMER0_compMatchSetCallBack(void(*Copy_PvCallBackFunc)(void));




#endif