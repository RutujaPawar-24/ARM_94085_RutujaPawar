/*
 * state_switch.h
 *
 *  Created on: Dec 18, 2025
 *      Author: Hp
 */

#ifndef STATE_SWITCH_H_
#define STATE_SWITCH_H_

#define BV(n) (1 << (n))

void switch_init(void);
int switch_status(void);

#endif /* STATE_SWITCH_H_ */
