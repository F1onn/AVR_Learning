/*
 * GccApplication1.c
 *
 * Created: 2022-02-24 오후 5:43:13
 * Author : fonn1
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA = 0xFF;
	
    while (1) 
    {
		PORTA = 0x0F;
		_delay_ms(1000);
		
		PORTA = 0xF0;
		_delay_ms(1000);
    }
}