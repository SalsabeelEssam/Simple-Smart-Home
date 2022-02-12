/*
 * CONFIG.h
 *
 *  Created on: May 25, 2021
 *      Author: Salsabeel Essam
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#define PortControl PORTB
#define PortData    PORTC

#define RS 0
#define RW 1
#define E  2


#define FUNCTION_SET 0x38
#define DISPLAY_MODE 0x0C
#define DISPLAY_CLEAR 0x01

#define FUNCTION_SET_4bit 0x28  //00101000
#define SET_4bit 0x02

#define SHIFT_RIGHT_COMMAND  0X18
#define SHIFT_LEFT_COMMAND   0X1C

#endif /* LCD_CONFIG_H_ */
