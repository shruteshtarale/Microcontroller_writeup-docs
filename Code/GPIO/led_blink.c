/******************************************************************************
 * File Name   : led_blink.c
 * Description : LED blinking using GPIO
 * Author      : Shrutesh Tarale
 ******************************************************************************/

#include <avr/io.h>
#include <util/delay.h>

/* ---------------------- Macro Definitions ---------------------- */
#define LED_PIN PB0

/* ---------------------- Function Prototypes -------------------- */
void GPIO_Init(void);
void LED_On(void);
void LED_Off(void);

/* ---------------------- Main Function -------------------------- */
int main(void)
{
    GPIO_Init();

    while (1)
    {
        LED_On();
        _delay_ms(500);

        LED_Off();
        _delay_ms(500);
    }
}

/* ---------------------- Function Definitions ------------------- */

/**
 * @brief Initialize GPIO pin as output
 */
void GPIO_Init(void)
{
    DDRB |= (1 << LED_PIN);   // Set PB0 as output
}

/**
 * @brief Turn ON LED
 */
void LED_On(void)
{
    PORTB |= (1 << LED_PIN);
}

/**
 * @brief Turn OFF LED
 */
void LED_Off(void)
{
    PORTB &= ~(1 << LED_PIN);
}
