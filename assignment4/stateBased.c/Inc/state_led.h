/*
 * state_led.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Hp
 */

#ifndef STATE_LED_H_
#define STATE_LED_H_

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
void led_on1(void);
void led_on2(void);
void led_off(void);

#endif /* STATE_LED_H_ */
