/*
 * main.h
 *
 *  Created on: Oct 9, 2022
 *      Author: Aniqu
 */

#ifndef MAIN_H_
#define MAIN_H_

#define MAX_TASKS 5

// Stack memory calculations

#define SIZE_TASK_STACK 	1024U
#define SIZE_SCHED_STACK 	1024U

#define START_SRAM 	0x20000000
#define SIZE_SRAM 	(40 * 1024)
#define SRAM_END 	(START_SRAM + SIZE_SRAM)

#define T1_STACK_START 		SRAM_END
#define T2_STACK_START 		( (SRAM_END) - (1 * SIZE_TASK_STACK) )
#define T3_STACK_START 		( (SRAM_END) - ( 2 * SIZE_TASK_STACK) )
#define T4_STACK_START 		( (SRAM_END) - ( 3 * SIZE_TASK_STACK) )
#define IDLE_STACK_START 	( (SRAM_END) - ( 4 * SIZE_TASK_STACK) )
#define SCHED_STACK_START 	( (SRAM_END) - ( 5 * SIZE_TASK_STACK) )

#define TICK_HZ 1000U

#define HSI_CLOCK 		16000000U
#define SYSTICK_TIM_CLK HSI_CLOCK

#define DUMMY_XPSR 0x01000000U

#define TASK_READY_STATE 	0x00
#define TASK_BLOCKED_STATE 	0xFF

#endif /* MAIN_H_ */
