/*
 * sched.h
 *
 *  Created on: Dec 25, 2022
 *      Author: Minh Duc Quach
 */

#ifndef INC_SCHED_H_
#define INC_SCHED_H_

#include <stdlib.h>
#include <stdint.h>
#include "main.h"

UART_HandleTypeDef huart2;

void SCH_Init();
uint32_t SCH_Add_Task(void (*pFunction)(), uint32_t, uint32_t);
void SCH_Update();
uint32_t SCH_Delete_Task(uint32_t);
void SCH_Dispatch_Tasks();

#endif /* INC_SCHED_H_ */
