#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"
#include "timer.h"

#define NORMAL_STATE 			SET
#define PRESSED_STATE 			RESET
#define NUM_OF_BUTTONS 			3

int isButtonPressed(int index);
void getKeyInput();
#endif /* INC_INPUT_READING_H_ */
