/*
 * main-uart.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */
#include "lpc17xx.h"
#include "LPC_types.h"
#include "uart.h"

int main (void)
{
	int var=1;
    UART1_Init(600);
    while(1)
    {
	UART1_PrintString("Ejemplo de proyecto con UART\r\n");
	UART1_PrintString("==================================\r\n");
	UART1_PrintString("Bienvenido a un ejemplo de proyecto con UART\r\n");
    UART1_PrintString("Esta seguro que desea continuar? Y/N\r\n");
	var = UART1_Getchar();
	if (var == 89)	//89 es ASCII de Y
	{
		UART1_PrintString("Y\r\n");
		UART1_PrintString("Gracias por usar el ejemplo de UART :)\r\n");
	}
	else
	{
		UART1_PrintString("N\r\n");
		UART1_PrintString("Hasta luego :(\r\n");
	}
    }

}


