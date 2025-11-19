/*
 * global.h
 *
 *  Created on: Nov 17, 2025
 *      Author: USER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"

#define INIT		0
#define AUTO_R1_G2	21
#define AUTO_R1_Y2	22
#define AUTO_G1_R2 	23
#define AUTO_Y1_R2	24

#define MODE_1		1
#define MODE_2		2
#define MODE_3		3
#define MODE_4		4

extern int status;
extern int mode;

#endif /* INC_GLOBAL_H_ */
