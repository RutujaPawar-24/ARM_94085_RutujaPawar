/*
 * my_led.h
 *
 *  Created on: Dec 17, 2025
 *      Author: Hp
 */

#ifndef MY_LED_H_
#define MY_LED_H_


#include<stdio.h>
#include<stdint.h>
#include"stm32f407xx.h"

#define BV(n) (1<<(n))

void led_init(void);
void led_on(void);
void led_off(void);

#endif /* MY_LED_H_ */
