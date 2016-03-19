/*
 * lcd.h
 *
 *  Created on: 4/9/2015
 *  Author: Matias Leandro Ferraro
 */
#include "lpc_types.h"

typedef struct __LCD_DATA_Type {
	Bool D4;
	Bool D5;
	Bool D6;
	Bool D7;
	Bool RS;
	Bool EN;
} LCD_DATA_Type;

#define LCD_PORT 0	// Donde esta el LCD
#define LCD_D4 2	// Pines del puerto
#define LCD_D5 3
#define LCD_D6 21
#define LCD_D7 27
#define LCD_RS 28
#define LCD_EN 26
void lcd_init_port(void);
void lcd_init(void);
void lcd_gotoxy(int x, int y);
void lcd_putc(char c);
void enviar_lcd (LCD_DATA_Type data);
void printf_lcd(char * string);
void delay(void);


