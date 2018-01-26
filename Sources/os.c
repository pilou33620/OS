/*
 * os.c
 *
 *  Created on: Jan 19, 2018
 *      Author: pilou
 */

#include "os.h"
#include "leds.h"

T_process processes[NB_PROCESSES];
T_process_list stopped;
T_process_list waitings;
T_process *running_process = NULL;
T_process_list processes_by_prio[NB_PRIO];

void
process_init(
    T_process *process,
    const unsigned char *name,
    const void(*fonction)(void))
{
  unsigned char i;
  for (i = 0; i < PROCESS_NAME_LENGTH; i++)
    process->name[i] = name[i];

  process->priority = 0;
  process->fonction = fonction;
  process->execution_time = 0;
  process->timer = 0;
}
void
os_init(void)
{

  unsigned i;

  for (i = 0; i < NB_PROCESSES; i++)
    {
      processes[i].fonction = NULL;
    }
  stopped = NULL;
  waitings = NULL;

  for (i = 0; i < NB_PRIO; i++)
    processes_by_prio[i] = NULL;
}
void os_sleep(unsigned long time){
  unsigned long i;
  for(i=0; i< time;i++ );
}
void process_start(T_process *process){
  process->fonction();
}


