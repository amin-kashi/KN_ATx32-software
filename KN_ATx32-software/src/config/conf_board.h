/**
 * \file
 *
 * \brief User board configuration template
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef CONF_BOARD_H
#define CONF_BOARD_H

//PORTA
#define AREFA			IOPORT_CREATE_PIN(PORTA, 0)
#define PA1				IOPORT_CREATE_PIN(PORTA, 1)
#define PA2				IOPORT_CREATE_PIN(PORTA, 2)
#define PA3				IOPORT_CREATE_PIN(PORTA, 3)
#define PA4				IOPORT_CREATE_PIN(PORTA, 4)
#define PA5				IOPORT_CREATE_PIN(PORTA, 5)
#define CURRENT_B		IOPORT_CREATE_PIN(PORTA, 6)
#define DRIVER_IN4		IOPORT_CREATE_PIN(PORTA, 7)
//PORTB					
#define DRIVER_IN3		IOPORT_CREATE_PIN(PORTB, 0)
#define DRIVER_IN2		IOPORT_CREATE_PIN(PORTB, 1)
#define DRIVER_IN1		IOPORT_CREATE_PIN(PORTB, 2)
#define CURRENT_A		IOPORT_CREATE_PIN(PORTB, 3)
//PORTC					
#define DRIVER_ENB		IOPORT_CREATE_PIN(PORTC, 0)
#define DRIVER_ENA		IOPORT_CREATE_PIN(PORTC, 1)
#define IRQ				IOPORT_CREATE_PIN(PORTC, 2)
#define CE				IOPORT_CREATE_PIN(PORTC, 3)
#define SCN				IOPORT_CREATE_PIN(PORTC, 4)
#define MOSI			IOPORT_CREATE_PIN(PORTC, 5)
#define MISO			IOPORT_CREATE_PIN(PORTC, 6)
#define SCK				IOPORT_CREATE_PIN(PORTC, 7)
//PORTD					
#define BUTTON_0		IOPORT_CREATE_PIN(PORTD, 0)
#define BUTTON_1		IOPORT_CREATE_PIN(PORTD, 1)
#define LED_WHITE		IOPORT_CREATE_PIN(PORTD, 2)
#define LED_BLUE		IOPORT_CREATE_PIN(PORTD, 3)
#define LED_GREEN		IOPORT_CREATE_PIN(PORTD, 4)
#define USB_DETECT		IOPORT_CREATE_PIN(PORTD, 5)
#define USB_N			IOPORT_CREATE_PIN(PORTD, 6)
#define USB_P			IOPORT_CREATE_PIN(PORTD, 7)
//PORTE
#define SDA				IOPORT_CREATE_PIN(PORTE, 0)
#define SDL				IOPORT_CREATE_PIN(PORTE, 1)
#define RX				IOPORT_CREATE_PIN(PORTE, 2)
#define TX				IOPORT_CREATE_PIN(PORTE, 3)
//PORTR
#define PR0				IOPORT_CREATE_PIN(PORTR, 0)
#define PR1				IOPORT_CREATE_PIN(PORTR, 1)

#endif // CONF_BOARD_H
