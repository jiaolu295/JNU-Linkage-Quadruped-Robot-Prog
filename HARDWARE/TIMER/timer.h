#ifndef _TIMER_H
#define _TIMER_H
#include "sys.h"
#include "led.h"
#include "tasks.h"

void TIM3_Init(void);
void TIM7_Init(void);
void TIM14_PWM_Init(u32 arr, u32 psc);

#endif
