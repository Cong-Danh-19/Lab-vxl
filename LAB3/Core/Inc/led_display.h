/*
 * led_display.h
 *
 *  Created on: Nov 1, 2025
 *      Author: USER
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
#include "global.h"

extern int index_led;
extern int counter1, counter2;

void display7SEG(int num);
void update7SEG(int index);

void updateLedBufferMode1();
void updateLedBufferMode2();
void updateLedBufferMode3();
void updateLedBufferMode4();

#endif /* INC_LED_DISPLAY_H_ */
