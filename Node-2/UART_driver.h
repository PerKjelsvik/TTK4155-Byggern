/*
 * UART_driver.h
 *
 * Created: 03.09.2016 16:32:57
 *  Author: Whiskey dicks
 */ 


#ifndef UART_DRIVER_H_
#define UART_DRIVER_H_

void UART_init(unsigned long clock_speed);
int put_char(unsigned char c);
int get_char(void);

#endif /* MAX233_DRIVER_H_ */