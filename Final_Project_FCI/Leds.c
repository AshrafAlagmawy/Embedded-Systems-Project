/*
 * Leds.c
 *
 *  Created on: Apr 24, 2023
 *      Author: HFCS
 */

#include "std_types.h"
#include "Leds.h"

void Leds_Init (void){
	/*Set Pins as output*/
SET_BIT(LED_GREEN_DDR,LED_GREEN_PIN_N);
SET_BIT(LED_BLUE_DDR,LED_BLUE_PIN_N);
SET_BIT(LED_YELLOW_DDR,LED_YELLOW_PIN_N);
SET_BIT(LED_RED_DDR,LED_RED_PIN_N);
}


void Leds_TurnOn (uint8 col){
    switch(col){
    case 'G':
    	SET_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	break;
    case 'B':
    	SET_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	break;
    case 'Y':
    	SET_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	break;
    case 'R':
    	SET_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;
    default:
    	SET_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	SET_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	SET_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	SET_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;

   }
}


void Leds_TurnOff (uint8 col){
    switch(col){
    case 'G':
    	CLR_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	break;
    case 'B':
    	CLR_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	break;
    case 'Y':
    	CLR_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	break;
    case 'R':
    	CLR_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;
    default:
    	CLR_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	CLR_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	CLR_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	CLR_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;

   }
}

void Leds_TurnTog (uint8 col){
    switch(col){
    case 'G':
    	TOGGLE_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	break;
    case 'B':
    	TOGGLE_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	break;
    case 'Y':
    	TOGGLE_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	break;
    case 'R':
    	TOGGLE_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;
    default:
    	TOGGLE_BIT(LED_GREEN_PORT,LED_GREEN_PIN_N);
    	TOGGLE_BIT(LED_BLUE_PORT,LED_BLUE_PIN_N);
    	TOGGLE_BIT(LED_YELLOW_PORT,LED_YELLOW_PIN_N);
    	TOGGLE_BIT(LED_RED_PORT,LED_RED_PIN_N);
    	break;

   }
}
