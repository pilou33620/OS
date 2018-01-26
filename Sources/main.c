/* ###################################################################
 **     Filename    : main.c
 **     Project     : OS
 **     Processor   : MC9S08QE8CLC
 **     Version     : Driver 01.12
 **     Compiler    : CodeWarrior HCS08 C Compiler
 **     Date/Time   : 2018-01-12, 16:06, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.12
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */

/* Including needed modules to compile this module/procedure */
#include "os.h"
#include "leds.h"

void L0(void);
void L1(void);
void L2(void);
void L4(void);


void main(void)
{

  PE_low_level_init();
  os_init();
  process_init(&processes[0], "L_0", L0);
  process_init(&processes[0], "L_1", L1);
  process_init(&processes[0], "L_2", L2);
  process_init(&processes[0], "L_3", L3);
  process_init(&processes[0], "L_4", L4);
  process_init(&processes[0], "L_5", L5);
  for (;;)
    {
      L0();
      L1();
      L2();
      L3();
      L4();
      L5();
      
    }

#ifdef PEX_RTOS_START
  PEX_RTOS_START(); /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif

  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for (;;)
    {
    }
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

