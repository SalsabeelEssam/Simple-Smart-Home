/*
 * LCD_INTERFACE.h
 *
 *  Created on: May 25, 2021
 *      Author: Salsabeel Essam
 */


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_




void LCD_VoidInti(void);
void LCD_VoidInti4Bit(void);

void Lcd_VoidSendData(u8 Copy_U8Data);
void Lcd_VoidSendCommand(u8 Copy_U8Comand);

void Lcd_VoidSendData4Bit(u8 Copy_U8Data);
void Lcd_VoidSendCommand4bit(u8 Copy_U8Comand);

void Lcd_VoidSendString(u8 *Copy_U8Data);
void Lcd_VoidSendString4Bit(u8 *Copy_U8Data);

void Lcd_VoidSendNumber(u32 Copy_U8Data);
void Lcd_VoidSendNumber4Bit(u32 Copy_U8Data);

void LCD_VoidSendStringToRowColumn(u8 Copy_u8Row , u8 Copy_u8Column ,  u8 *Copy_u8String);

void LCD_VoidCreateUserCharacter(u8 *Pattern, u8 Location);


void LCD_ClearScreen(void);


void LCD_VoidSendStringToRowColumn(u8 Copy_u8Row , u8 Copy_u8Column ,  u8 *Copy_u8String);

void LCD_SetPosition(u8 row, u8 col);
void LCD_VoidDisplayShift(u8 Copy_u8Direction);

#endif /* LCD_INTERFACE_H_ */
