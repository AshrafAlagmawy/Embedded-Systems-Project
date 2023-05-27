/*
 * Keypad.h
 *
 *  Created on: Apr 10, 2023
 *      Author: HFCS
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include <util/delay.h>
#include"ATmega32_Rrgiosters.h"
#include "BIT_MATH.h"

#define INVALID_KEYPAD_PRESS (0Xff)

void keypad_init();
unsigned char keypad_get_value();

#endif /* KEYPAD_H_ */
