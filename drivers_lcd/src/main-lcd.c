/*
 * main-lcd.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif
// TODO: insert other include files here
#define __USE_CMSIS
#include "lcd.h"
#include "puertos.h"


// TODO: insert other definitions and declarations here
char string_1[12]="Boton->UNO\0";
char string_2[12]="Boton->DOS\0";
char string_3[12]="Boton->TRES\0";
char string_4[16]="Boton->CUATRO\0";
char string_5[16]="Boton->ninguno\0";
int i=1,j=1,k=1,m=1;
void main(void) {

	init_port(PTO_2,PIN_8,SALIDA);
	init_port(PTO_2,PIN_10,SALIDA);
	init_port(PTO_2,PIN_11,SALIDA);
	init_port(PTO_2,PIN_12,SALIDA);
	lcd_init_port();
	init_port(PTO_2,PIN_7,ENTRADA);
	init_port(PTO_2,PIN_6,ENTRADA);
	init_port(PTO_2,PIN_5,ENTRADA);
	init_port(PTO_2,PIN_4,ENTRADA);




	init_port(PTO_0,PIN_22,SALIDA);
	lcd_init();
    lcd_gotoxy(1, 1);
	lcd_putc('P');
	lcd_putc('U');
	lcd_putc('L');
	lcd_putc('S');
	lcd_putc('A');
	lcd_putc('D');
	lcd_putc('O');
	lcd_putc('R');
	lcd_putc(' ');
	lcd_putc('P');
	lcd_putc('R');
	lcd_putc('E');
	lcd_putc('S');
	lcd_putc('S');
	lcd_putc(':');
   //lcd_putc('\b');
while(1) {


	if(((ifhigh(PTO_2,PIN_7)==ALTO)&(i==1)))
    {
		outputhigh(PTO_2,PIN_8);
		lcd_gotoxy(1, 2);
		printf_lcd("                ");
		lcd_gotoxy(1, 2);
		printf_lcd(string_1);
		i=0;

    }else
    	{

    	//outputlow(PTO_2,PIN_8);

    	}
	if((ifhigh(PTO_2,PIN_6)==ALTO)&(j==1))
	{
		outputhigh(PTO_2,PIN_10);
		lcd_gotoxy(1, 2);
		printf_lcd("                ");
		lcd_gotoxy(1, 2);
		printf_lcd(string_2);
		j=0;
	}
	else //outputlow(PTO_2,PIN_10);

	if((ifhigh(PTO_2,PIN_5)==ALTO)&(k==1))
	{
		outputhigh(PTO_2,PIN_11);
		lcd_gotoxy(1, 2);
		printf_lcd("                ");
		lcd_gotoxy(1, 2);
		printf_lcd(string_4);
	    k=0;
	}else //outputlow(PTO_2,PIN_11);

    if((ifhigh(PTO_2,PIN_4)==ALTO)&&(m==1))
	{
		outputhigh(PTO_2,PIN_12);
		outputhigh(PTO_0,PIN_22);
		lcd_gotoxy(1, 2);
		printf_lcd("                ");
		lcd_gotoxy(1, 2);
		printf_lcd(string_3);
		m=0;
	}else {//outputlow(PTO_2,PIN_12);
	 //outputlow(PTO_0,PIN_22);
	}
	if((ifhigh(PTO_2,PIN_7)==ALTO)&&(ifhigh(PTO_2,PIN_5)==ALTO))
	{	lcd_gotoxy(1, 2);
		printf_lcd(string_5);
		outputlow(PTO_2,PIN_8);
		outputlow(PTO_2,PIN_11);
		outputlow(PTO_2,PIN_12);
		outputlow(PTO_2,PIN_10);
        i=1;j=1;k=1;m=1;
     }

}
}


