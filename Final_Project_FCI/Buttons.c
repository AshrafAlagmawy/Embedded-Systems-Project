/*
 * Buttons.c

 *
 *  Created on: Apr 24, 2023
 *      Author: HFCS
 */
#include "Buttons.h"

void Button_Init (void){
	/*Set Pins as input*/
	CLR_BIT(Button_1_DDR,Button_1_PIN_N);
	CLR_BIT(Button_2_DDR,Button_2_PIN_N);
	CLR_BIT(Button_3_DDR,Button_3_PIN_N);
	CLR_BIT(Button_4_DDR,Button_4_PIN_N);

    /*Enable pull up*/
	SET_BIT(Button_1_PORT,Button_1_PIN_N);
	SET_BIT(Button_2_PORT,Button_2_PIN_N);
	SET_BIT(Button_3_PORT,Button_3_PIN_N);
	SET_BIT(Button_4_PORT,Button_4_PIN_N);
}
uint8 Button_get_value(){
	uint8 ans=INVALID_PRESS;

    if(GET_BIT(Button_1_PIN,Button_1_PIN_N)==0){
    	  _delay_ms(150);
    	  if(GET_BIT(Button_1_PIN,Button_1_PIN_N)==0)
    		  ans=1;
    }
    else if(GET_BIT(Button_2_PIN,Button_2_PIN_N)==0){
  	  _delay_ms(150);
  	  if(GET_BIT(Button_2_PIN,Button_2_PIN_N)==0)
  		  ans=2;
    }
    else if(GET_BIT(Button_3_PIN,Button_3_PIN_N)==0){
  	  _delay_ms(150);
  	  if(GET_BIT(Button_3_PIN,Button_3_PIN_N)==0)
  		  ans=3;
    }
    else if(GET_BIT(Button_4_PIN,Button_4_PIN_N)==0){
  	  _delay_ms(150);
  	  if(GET_BIT(Button_4_PIN,Button_4_PIN_N)==0)
  		  ans=4;
    }

return ans;
}


