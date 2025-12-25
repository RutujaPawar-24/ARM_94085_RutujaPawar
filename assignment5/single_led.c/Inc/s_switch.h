/*
 * s_switch.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Hp
 */

#ifndef S_SWITCH_H_
#define S_SWITCH_H_

#include<stdio.h>
#include<stdint.h>
#include "stm32f407xx.h"

#define bv(n) (1<<(n))

void switch_init(void);
int switch_status(void);

#endif /* S_SWITCH_H_ */
