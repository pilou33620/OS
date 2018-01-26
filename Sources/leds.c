/*
 * leds.c
 *
 *  Created on: Jan 19, 2018
 *      Author: pilou
 */
#include "os.h"
#include "leds.h"


void L0(void){
  static unsigned int i=15000;
  i++;
  if(i==15000){
      LED_0=0;
  }
  if(i==30000){
      LED_0=1;
      i=0;
  }
}
void L1(void){
  static unsigned int i=0;
  i++;
  if(i==2500){
      LED_1=0;
  }
  if(i==5000){
      LED_1=1;
      i=0;
  }
}
void L2(void){
  static unsigned int i=0;
  i++;
  if(i==5000){
      LED_2=0;
  }
  if(i==10000){
      LED_2=1;
      i=0;
  }
}
void L3(void){
  static unsigned int i=0;
  i++;
  if(i==4000){
      LED_3=0;
  }
  if(i==8000){
      LED_3=1;
      i=0;
  }
}
void L4(void){
  static unsigned int i=0;
  i++;
  if(i==15000){
      LED_4=0;
  }
  if(i==30000){
      LED_4=1;
      i=0;
  }
}
void L5(void){
  static unsigned int i=0;
  i++;
  if(i==2000){
      LED_5=0;
  }
  if(i==4000){
      LED_5=1;
      i=0;
  }
}
