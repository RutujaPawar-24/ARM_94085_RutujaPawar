#include "s_led.h"

void led_init(void)
{
	//0. enable clock for GPIOD in AHB1
	RCC->AHB1ENR |= bv(3);
	//1. select mode as output
	GPIOD->MODER &= ~(bv(25));
	GPIOD->MODER |= bv(24);
	//2. select type as push pull
	GPIOD->OTYPER &= ~(bv(12));
	//3. select speed as low
	GPIOD->OSPEEDR &= ~(bv(24) | bv(25));
	//4. select pull up/down as no
	GPIOD->PUPDR &= ~(bv(24) | bv(25));
}
void led_on(void)
{
	GPIOD->ODR |= bv(12);
}
void led_off(void)
{
	GPIOD->ODR &= ~bv(12);
}

/*
 * s_led.c
 *
 *  Created on: Dec 18, 2025
 *      Author: Hp
 */


