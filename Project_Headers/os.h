/*
 * os.h
 *
 *  Created on: Jan 19, 2018
 *      Author: pilou
 */

#ifndef OS_H_
#define OS_H_

#include "Cpu.h"
#include "Events.h"
#include "PTC.h"
/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"


#define NB_PROCESSES (4)
#define NB_PRIO (64)
#define PROCESS_NAME_LENGTH (8)

#define DELAI (2000)
#if (NB_PRIO>255)
#error max is 255
#endif
#define NULL ((void*)0)

typedef void* (*T_fonction)(void);

typedef struct{

  unsigned char name[PROCESS_NAME_LENGTH];
  char priority;
  void (*fonction)();
  unsigned long execution_time;
  unsigned long timer;

}T_process;


typedef struct _elem{

  struct _elem *next;
  T_process *process;

}T_elem_list_proces;

typedef T_elem_list_proces  *T_process_list;

extern T_process processes[NB_PROCESSES];



void os_init(void);

void process_init(
    T_process *process,
    const unsigned char *name,
    const void (*fonction)(void));
void os_sleep(unsigned long time);




#endif /* OS_H_ */
