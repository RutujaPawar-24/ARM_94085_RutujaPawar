/*
 * toggle_led.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Hp
 */

#ifndef TOGGLE_LED_H_
#define TOGGLE_LED_H_

#include<stdio.h>
#include<stdint.h>
#include"stm32f407xx.h"

#define BV(n) (1<<(n))

void led_init(void);
void toggle(void);
// led_on(void);
//void led_off(void);

#endif /* TOGGLE_LED_H_ */
