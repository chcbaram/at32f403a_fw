/*
 * bsp.c
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */


#include "bsp.h"
#include "uart.h"





void bspInit(void)
{
}

void delay(uint32_t ms)
{
#ifdef _USE_HW_RTOS
  if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
  {
    osDelay(ms);
  }
  else
  {
    HAL_Delay(ms);
  }
#else
  
#endif
}

uint32_t millis(void)
{
  return 0;
}

int __io_putchar(int ch)
{
  //uartWrite(_DEF_UART1, (uint8_t *)&ch, 1);
  return 1;
}


