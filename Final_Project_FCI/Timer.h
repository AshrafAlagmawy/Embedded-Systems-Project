/*
 * Timer.h
 *
 *  Created on: May 16, 2023
 *      Author: HFCS
 */

#ifndef TIMER_H_
#define TIMER_H_

#define  NUMBER_OF_OVERFLOW 62
#define  NULL_PTR  ((void*)0)

void timer0_init(void);
void timer0_setCallBack(void(*a_ptr)(void));

#endif /* TIMER_H_ */
