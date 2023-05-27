/*
 * Leds.h
 *
 *  Created on: Apr 24, 2023
 *      Author: HFCS
 */


#ifndef LEDS_H_
#define LEDS_H_
#include "std_types.h"
#include <util/delay.h>
#include"ATmega32_Rrgiosters.h"
#include "BIT_MATH.h"

#define LED_GREEN_PORT		PORTA
#define LED_BLUE_PORT		PORTA
#define LED_YELLOW_PORT		PORTA
#define LED_RED_PORT		PORTB

#define LED_GREEN_DDR		DDRA
#define LED_BLUE_DDR		DDRA
#define LED_YELLOW_DDR		DDRA
#define LED_RED_DDR		    DDRB

#define LED_GREEN_PIN_N		4
#define LED_BLUE_PIN_N		5
#define LED_YELLOW_PIN_N	6
#define LED_RED_PIN_N	    7


void Leds_Init (void);
void Leds_TurnOn (uint8 COL);
void Leds_TurnOff (uint8 COL);
void Leds_TurnTog (uint8 COL);
#endif /* LEDS_H_ */
