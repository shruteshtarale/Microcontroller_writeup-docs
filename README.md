# Microcontroller_writeup-docs

#What is a Microcontroller?
A microcontroller (MCU) is a compact integrated circuit designed to perform a specific control task in embedded systems.
it mainly conatins CPU,MEMORY,INPUT/OUTPUT PORTS & PERIPERALS(timers,ADC,UART)
Examples:
8051
Arduino (ATmega328P)
PIC
ARM Cortex

###Microprocessor vs Microcontroller###
| Feature    | Microcontroller | Microprocessor    |
| ---------- | --------------- | ----------------- |
| Purpose    | Dedicated task  | General purpose   |
| Components | Built-in        | External required |
| Cost       | Low             | High              |
| Power      | Low             | High              |
| Example    | Arduino         | Intel i7          |


#Architecture Types
1. Von Neumann Architecture
Single memory for data + program
Slower
2. Harvard Architecture
Separate memory
Faster (used in most MCUs)

#Memory Organization
Types of Memory
ROM / Flash → Stores program
RAM → Temporary data
EEPROM → Non-volatile storage
Important Concepts
Stack
Heap
Registers
Program Counter (PC)
Stack Pointer (SP)

Most modern microcontrollers use Harvard architecture for speed and efficiency.

#I/O Ports
Used to connect LEDs, switches, sensors
Can be configured as:
Input
Output

Timers and Counters
Uses:
Delay generation
Event counting
PWM generation

Example:

Timer interrupt every 1ms

#Interrupts
signal that stops CPU and execute a special function.
 #Types
External,Timer,Serial
these help us to improve efficiency by avoiding continous polling.

#Communication Protocols
*UART
Asynchronous
2 wires
* SPI
Fast
4 wires
*I2C
2 wires (SCL, SDA)
Multi-device

#Converters
ADC
Converts analog → digital
Example: Temperature sensor
DAC
Converts digital → analog

##GPIO Programming##

#include <avr/io.h>

int main() {
    DDRB = 0xFF; // Set PORTB as output
    while(1) {
        PORTB = 0xFF; // LED ON
    }
}


##Microcontroller Structure/
│── README.md
│── Basics/
│   ├── Introduction.md
│   ├── Architecture.md
│   ├── Memory.md
│
│── Peripherals/
│   ├── GPIO.md
│   ├── Timers.md
│   ├── ADC.md
│
│── Communication/
│   ├── UART.md
│   ├── SPI.md
│   ├── I2C.md
│
│── Code/
│   ├── LED_Blink.c
│   ├── Interrupt.c
│
│── Projects/
│   ├── Smart_Home/
│   ├── Temperature_System/
