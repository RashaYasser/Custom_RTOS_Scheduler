# Custom RTOS Scheduler on AVR ATmega32

This project implements a custom Real-Time Operating System (RTOS) scheduler on the AVR ATmega32 microcontroller. The scheduler manages multiple tasks, including controlling three LEDs, a servo motor, and writing on a 2x16 LCD.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [RTOS Functionality](#rtos-functionality)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Project Structure](#project-structure)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction

This project demonstrates a custom RTOS scheduler for the AVR ATmega32 microcontroller. The scheduler handles multiple tasks with different priorities and timing requirements. The tasks include:
1. Controlling three LEDs.
2. Controlling a servo motor.
3. Writing text to a 2x16 LCD.

## Features

- Custom RTOS scheduler for task management.
- Three tasks for controlling individual LEDs.
- Task for controlling a servo motor.
- Task for writing text on a 2x16 LCD.
- Efficient and optimized code for real-time performance.

## RTOS Functionality

The custom RTOS scheduler provides various functions to manage tasks. These include starting, suspending, deleting, pausing, and resuming tasks.

### Tasks

- *LED Tasks:* Each LED is controlled by a separate task, which toggles the LED on and off at different intervals.
- *Servo Task:* This task controls the position of a servo motor using PWM signals.
- *LCD Task:* This task writes and updates text on a 2x16 LCD display.

### Functions

- RTOS_voidStart(): Initializes the RTOS scheduler and starts the system.
- RTOS_voidCreateTask(u8 Copy_u8Priority, u32 Copy_u8Priodicity, void (*Copy_voidPvTaskF)(void)): Creates a new task and assigns it a priority and periodicity.
- RTOS_voidTerminateTask(u8 Copy_u8TaskID): Terminates a task within the RTOS.
- RTOS_voidResumeTask(u8 Copy_u8TaskID): Resumes a task within the RTOS.
- RTOS_voidPauseTask(u8 Copy_u8TaskID): Pauses a task within the RTOS.
