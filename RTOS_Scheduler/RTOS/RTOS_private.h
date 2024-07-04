/*
 ============================================================================
 Module      : RTOS driver
 Name        : RTOS_private.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : RTOS program
 Date        : 7/4/2024
 ============================================================================
 */

#ifndef RTOS_PRIVATE_H_
#define RTOS_PRIVATE_H_


#define TASK_READY       0
#define TASK_SUSPEND     1

typedef struct
{
	u16 periodicity;
	void (*PvTaskFunc)(void);
	u8 taskState;
}TCB;/*task block controller*/

/*
 * Description: Scheduler function for RTOS.
 *
 *  This function is responsible for scheduling and executing tasks within the RTOS.
 *  It maintains a tick counter Local_u16TickCounter to track.
 *  For each invocation of the scheduler function, the tick counter is incremented.
 *  The function then loops through all tasks stored in the Task Control Block (TCB) array
 *  and checks if the current tick count is a multiple of a task's periodicity.
 *  If so, the task is due for execution, and its associated function pointer is invoked.
 *  If the function pointer is NULL, indicating that no task is assigned, no action is taken.
 *  This function should be called periodically, typically from an interrupt service routine (ISR),
 *  to ensure timely task execution.
 *
 * Parameters: None
 *
 * Returns: None
 */
static void voidScheduler();


#endif /* RTOS_PRIVATE_H_ */
