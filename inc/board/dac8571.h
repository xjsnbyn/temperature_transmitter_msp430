/*
 * dac8571.h
 *
 *  Created on: 2018-05-17 20:43
 *      Author: Jack Chen <redchenjs@live.com>
 */

#ifndef INC_BOARD_DAC8571_H_
#define INC_BOARD_DAC8571_H_

#include <stdint.h>

extern void dac8571_set_output(uint16_t value);
extern void dac8571_init(void);

#endif /* INC_BOARD_DAC8571_H_ */
