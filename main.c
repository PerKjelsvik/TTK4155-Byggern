/*
 * main.c
 *
 * Created: 03.09.2016 12:26:04
 *  Author: Whiskey dicks
 
 Crystal oscillator frequency: 4.9152 MHz
 
 Use external reset?
 DIP eller SO?
 Klokka f�kka - 1000 ms git 400 ms periode
 
 Hva er MAXIM233??
 
 */ 

//#define CLOCK_SPEED = ??

#include <avr/io.h>
#include <util/delay.h>

#include "bit_macros.h"
#include "UART_driver.h"

#define DDRB |= (1 << PB1)		// Data direction register B. 0 sets port PB1 to output mode.
//Funker dette? Ser ikke forskjell

int main(void) {
	
	//UART_init(CLOCK_SPEED)
	
	while(1) {
		_delay_ms(2000);			//ms
		
		toggle_bit(PORTB, PB1);
    }
	//return 0;
}