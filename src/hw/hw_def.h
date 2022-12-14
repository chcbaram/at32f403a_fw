/*
 * hw_def.h
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "bsp.h"



#define _DEF_FIRMWATRE_VERSION    "V220817R1"
#define _DEF_BOARD_NAME           "AT32F403A_FW"



#define _USE_HW_FLASH


#define _USE_HW_LED
#define      HW_LED_MAX_CH          1

#define _USE_HW_CDC
#define _USE_HW_USB
#define      HW_USE_CDC             1

#define _USE_HW_UART
#define      HW_UART_MAX_CH         1

#define _USE_HW_LOG
#define      HW_LOG_CH              _DEF_UART1
#define      HW_LOG_BOOT_BUF_MAX    1024
#define      HW_LOG_LIST_BUF_MAX    1024

#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    32
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    64


#endif /* SRC_HW_HW_DEF_H_ */
