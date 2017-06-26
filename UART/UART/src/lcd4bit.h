/*
 * lcd4bit.h
 *
 * Created: 02/07/17 02:51:47 PM
 * Author : Hoang Thien Tran
 */ 

#ifndef LCD4BIT_H_
#define LCD4BIT_H_

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#define LCD_DATA	PORTD		//Choose the port that suits your needs
#define LCD_DDR		DDRD
#define RS	1					//PB0  binary equivalent of pin number
#define RW	2					//PB1
#define E	4					//PB2

#define delay_time 50			//Default delay time for most instructions

void Lcd4_Write_Instruction();
void Lcd4_Write_Data();
void Lcd4_Execute(uint8_t data);				//Load data to the LCD
void Lcd4_Cmd(uint8_t cmd);						//Send a command
//----------Main functions for use----------//
void Lcd4_Clear();								//Clear screen
void Lcd4_Cursor(uint8_t row, uint8_t column);	//Set DDRAM(cursor) address --- 0b1(ADD6:0)
void Lcd4_Ini(void);							//Initialize LCD
void Lcd4_SetChar(char character);				//Send a single character
void Lcd4_SetString(char *pStr);				//Send a string

#endif
