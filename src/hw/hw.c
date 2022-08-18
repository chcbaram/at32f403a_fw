/*
 * hw.c
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */


#include "hw.h"



extern uint32_t _flash_tag_addr;
extern uint32_t __isr_vector_addr;





volatile const firm_ver_t firm_ver __attribute__((section(".version"))) = 
{
  .magic_number = VERSION_MAGIC_NUMBER,
  .version_str  = _DEF_FIRMWATRE_VERSION,
  .name_str     = _DEF_BOARD_NAME,
};


void hwInit(void)
{
  bspInit();

  ledInit();
}
