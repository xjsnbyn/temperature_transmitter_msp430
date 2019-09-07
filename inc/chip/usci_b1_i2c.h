/*
 * usci_b1_i2c.h
 *
 *  Created on: 2016-06-25
 *      Author: Jack Chen <redchenjs@live.com>
 */

#ifndef INC_CHIP_USCI_B1_I2C_H_
#define INC_CHIP_USCI_B1_I2C_H_

extern unsigned char usci_b1_i2c_transmit_frame(unsigned char slave_addr, unsigned char *p_buff, unsigned char num);
extern unsigned char usci_b1_i2c_receive_frame(unsigned char slave_addr, unsigned char *p_buff, unsigned char num);

extern void usci_b1_i2c_tx_isr_handle(void);
extern void usci_b1_i2c_rx_isr_handle(void);

extern void usci_b1_i2c_init(void);

#endif /* INC_CHIP_USCI_B1_I2C_H_ */