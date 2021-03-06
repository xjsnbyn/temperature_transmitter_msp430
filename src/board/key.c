/*
 * key.c
 *
 *  Created on: 2018-05-19 13:29
 *      Author: Jack Chen <redchenjs@live.com>
 */

#include <msp430.h>

void key_init(void)
{
    P2DIR &=~(BIT0 + BIT2 + BIT4 + BIT5);
    P2REN |=  BIT0 + BIT2 + BIT4 + BIT5;
    P2OUT |=  BIT0 + BIT2 + BIT4 + BIT5;
}
