/*
 ============================================================================
 Module      : RTOS driver
 Name        : RTOS_interface.h
 Layer       : RTOS_Stack
 Author      : RASHA_YASSER
 Description : header file for interface  RTOS Stack
 Date        : 7/4/2024
 ============================================================================
 */
#ifndef RTOS_INTERFACE_H_
#define RTOS_INTERFACE_H_

/*******************************************************************************
 *                              Functions Prototypes
 *******************************************************************************/

/*
 * Description: Initializes the Real-Time Operating System (RTOS) scheduler and starts the system.
 * This function is responsible for initializing the RTOS scheduler and starting the system.
 * Call  the scheduler function(`voidScheduler`) to be called whenever a compare match interrupt occurs in Timer0.
 * Enables global interrupts to allow the scheduler to run and handle interrupts.
 * Initializes Timer0 to serve as the system timer, which is used for task scheduling and timing purposes.
 * Parameters: None
 * Returns: None
 */
void RTOS_voidStart();
/*
 * Description : Creates a new task and assigns it a priority and periodicity.
 * This function allows the user to create a new task within RTOS.Tasks are stored in a TCB.
 * Parameters:
 *   - Copy_u8Priority: The priority of the task (0 being the highest priority).
 *   - Copy_u8Priodicity: The task's periodicity
 *   - Copy_voidPvTaskF: A pointer to the function representing the task.
 *
 * Returns:
 *   - OK: If the task creation is successful.
 *   - NOT_OK: If the provided priority exceeds the maximum number of tasks.
 */
u8 RTOS_voidCreateTask(u8 Copy_u8Priority,u32 Copy_u8Priodicity,void (*Copy_voidPvTaskF)(void));

/*
 * Description: Terminates a task within the Real-Time Operating System RTOS.
 * This function terminates the task by setting its function pointer to NULL,
 * indicating that the task is no longer active and will not be executed.
 * Parameters:
 *   - Copy_u8TaskID: The ID or index of the task within the TCB
 *
 * Returns: None
 */
void RTOS_voidTerminateTask(u8 Copy_u8TaskID );

/*
 * Description: Resumes a task within RTOS.
 *
 * This function resumes the specified task by setting its state to TASK_READY,
 *  indicating that the task is ready for execution after being paused.
 * Parameters:
 *   - Copy_u8TaskID: The ID or index of the task within TCB
 *
 * Returns: None
 */
void RTOS_voidResumeTask(u8 Copy_u8TaskID );

/*
 * Description: Pauses a task within RTOS.
 *
 * This function pauses the task by setting its state to TASK_SUSPEND,
 * indicating that the task is temporarily suspended and will not be executed until resumed.
 *
 * Parameters:
 *   - Copy_u8TaskID: The ID or index of the task within the TCB.
 *
 * Returns: None
 */
void RTOS_voidPauseTask(u8 Copy_u8TaskID );


#endif /* RTOS_INTERFACE_H_ */
