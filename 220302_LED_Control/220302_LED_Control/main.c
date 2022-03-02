/*
 * 220302_LED_Control.c
 *
 * Created: 2022-03-02 오후 8:24:47
 * Author : fonn1
 */ 
/*
7seg
abcdefg dp
0123456 7

0 = abcdef	~(00111111)	11000000
			~(0x3f)		0xc0
1 = bc		~(00000110)	11111001
			~(0x06)		0xf9
2 = abdeg	~(01011011)	10100100
			~(0x5b)		0xa4
3 = abcdg	~(01001111)	10110000
			~(0x4f)		0xb0
4 = bcfg	~(01100110)	10011001
			~(0x66)		0x99
5 = acdfg	~(01101101)	10010010
			~(0x6d)		0x92
6 = acdefg	~(01111101)	10000010
			~(0x7d)		0x82
7 = abcf	~(00100111)	11011000
			~(0x27)		0xd8
8 = abcdefg	~(01111111)	10000000
			~(0x7f)		0x80
9 = abcdfg	~(01101111)	10010000
			~(0x6f)		0x90
*/
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA = 0xFF;
	DDRB = 0xFF;
	
    while (1) 
    {	
		PORTB = ~(0x00);	//7seg_init_declaring
		
		//LED
		PORTA = 0b00000000;		//0x00
		_delay_ms(300);
		
		PORTA = 0b00000001;		//0x01
		_delay_ms(300);
		
		PORTA = 0b00000011;		//0x03
		_delay_ms(300);
		
		PORTA = 0b00000111;		//0x07
		_delay_ms(300);
		
		PORTA = 0b00001111;		//0x0f
		_delay_ms(300);
		
		PORTA = 0b00011111;		//0x1f
		_delay_ms(300);
		
		PORTA = 0b00111111;		//0x3f
		_delay_ms(300);
		
		PORTA = 0b01111111;		//0x7f
		_delay_ms(300);
		
		PORTA = 0b11111111;		//0xff
		_delay_ms(300);
		
		//PORTB == 7seg
		
		PORTB = 0b11000000;		//0x
		_delay_ms(300);
		
		PORTB = 0b11111001;
		_delay_ms(300);
		
		PORTB = 0b10100100;
		_delay_ms(300);
		
		PORTB = 0b10110000;
		_delay_ms(300);
		
		PORTB = 0b10011001;
		_delay_ms(300);
		
		PORTB = 0b10010010;
		_delay_ms(300);
		
		PORTB = 0b10000010;
		_delay_ms(300);
		
		PORTB = 0b11011000;
		_delay_ms(300);
		
		PORTB = 0b10000000;
		_delay_ms(300);
		
		PORTB = 0b10010000;
		_delay_ms(300);
		
		PORTB = 0b01111111;
		_delay_ms(300);
		
    }
}
