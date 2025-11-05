/*
 * timer.h
 *
 *  Created on: Nov 1, 2025
 *      Author: USER
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#define NUM_OF_TIMERS 			4

extern int TIME_CYCLE;

extern int timer_flag[NUM_OF_TIMERS];

void setTimer(int index, int duration);
void clearTimer(int index);
void timerRun();


#endif /* INC_TIMER_H_ */
