/******************************************************************************
 * File Name   : timer_delay.c
 * Description : Timer-based delay using Timer0
 ******************************************************************************/

#include <avr/io.h>

/* Function Prototypes */
void Timer0_Init(void);
void delay_ms(uint16_t time);

/* Main Function */
int main(void)
{
    DDRB |= (1 << PB0);

    Timer0_Init();

    while (1)
    {
        PORTB ^= (1 << PB0); // Toggle LED
        delay_ms(1000);
    }
}

/* Timer Initialization */
void Timer0_Init(void)
{
    TCCR0A = 0x00;          // Normal mode
    TCCR0B = (1 << CS01);   // Prescaler = 8
}

/* Delay Function */
void delay_ms(uint16_t time)
{
    for (uint16_t i = 0; i < time; i++)
    {
        TCNT0 = 0;
        while (!(TIFR0 & (1 << TOV0)));
        TIFR0 |= (1 << TOV0);
    }
}
