/*
 * Buttons.h
 *
 *  Created on: Apr 24, 2023
 *      Author: HFCS
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_
#include "std_types.h"
#include <util/delay.h>
#include"ATmega32_Rrgiosters.h"
#include "BIT_MATH.h"

#define Button_1_PORT		PORTD
#define Button_2_PORT		PORTD
#define Button_3_PORT		PORTD
#define Button_4_PORT		PORTD

#define Button_1_DDR		DDRD
#define Button_2_DDR		DDRD
#define Button_3_DDR		DDRD
#define Button_4_DDR		DDRD

#define Button_1_PIN		PIND
#define Button_2_PIN		PIND
#define Button_3_PIN		PIND
#define Button_4_PIN		PIND

#define Button_1_PIN_N		3
#define Button_2_PIN_N		5
#define Button_3_PIN_N		6
#define Button_4_PIN_N		7

#define INVALID_PRESS (0Xff)


void Button_Init (void);
uint8 Button_get_value();

#endif /* BUTTONS_H_ */
