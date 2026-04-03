/******************************************************************************
 * File Name   : external_interrupt.c
 * Description : LED toggle using external interrupt INT0
 ******************************************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>

/* Function Prototypes */
void Interrupt_Init(void);

/* Main Function */
int main(void)
{
    DDRB |= (1 << PB0); // LED output

    Interrupt_Init();

    sei(); // Enable global interrupts

    while (1)
    {
        // Main loop does nothing
    }
}

/* Interrupt Initialization */
void Interrupt_Init(void)
{
    EIMSK |= (1 << INT0);   // Enable INT0
    EICRA |= (1 << ISC01);  // Falling edge trigger
}

/* ISR */
ISR(INT0_vect)
{
    PORTB ^= (1 << PB0); // Toggle LED
}
