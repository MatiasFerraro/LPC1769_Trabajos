/*
 * main-uart.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */
#include "lpc_types.h"
#include "uart.h"
#include "uart.h"
#include "lcd.h"

int main (void)
{
   int var;
   UART1_Init(600); //Inicializo uart1: 8,N,1 a 600 baudios
   lcd_init_port();
   lcd_init();
   while(1)
    {
	    UART1_Sendchar(65);
        UART1_PrintString("String enviado por la UART!\r\n");
        var = UART1_Getchar();
        lcd_gotoxy(1,1);
        printf_lcd("Caracter Rx:");
        lcd_gotoxy(1,2);
        lcd_putc((char) var);
    }
}
