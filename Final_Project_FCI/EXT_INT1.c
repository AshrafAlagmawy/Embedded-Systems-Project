/*
 * EXT_INT1.c

 *
 *  Created on: May 6, 2023
 *      Author: HFCS
 */

#include "ATmega32_Rrgiosters.h"
#include "BIT_MATH.h"
#include "EXT_INT1.h"
#include <avr/interrupt.h>

#define I_BIT (7)
/*#define SREG	                        *((volatile unsigned char*)0x5f)
#define ISC11 3
#define ISC10 2
#define INT1  7*/

void (*g_CallBackPtr)(void)=NULL_PTR;

ISR (INT1_vect){
	if(g_CallBackPtr!= NULL_PTR){
		(*g_CallBackPtr)();
	}
}

void INT_Iint(void){
	CLR_BIT(SREG , I_BIT);
	CLR_BIT(DDRD , 3);
	SET_BIT(PORTD ,3);
	SET_BIT(GICR , INT1);
	SET_BIT(MCUCR , ISC11);
	CLR_BIT(MCUCR , ISC10);
	SET_BIT(SREG , I_BIT);
}

void INT_SET_CallBack(void(*a_ptr)(void)){
	g_CallBackPtr = a_ptr;
}
