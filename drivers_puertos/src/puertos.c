/*
 * puertos.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */
#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif
#define __USE_CMSIS
#include "puertos.h"

void init_port(int puerto, int pin, int modo)
{
	switch(modo)
	{
	case SALIDA:
	            switch(puerto)
	                           {
	                            case  0: LPC_GPIO0->FIODIR |= (1<<pin);
	                            case  1: LPC_GPIO1->FIODIR |= (1<<pin);
	                            case  2: LPC_GPIO2->FIODIR |= (1<<pin);
	                            case  3: LPC_GPIO3->FIODIR |= (1<<pin);
	                            case  4: LPC_GPIO4->FIODIR |= (1<<pin);
                               }break;
    case ENTRADA:
                switch(puerto)
                               {
	           	                case  0: LPC_GPIO0->FIODIR &=~(1<<pin);
	           	                case  1: LPC_GPIO1->FIODIR &=~(1<<pin);
	                            case  2: LPC_GPIO2->FIODIR &=~(1<<pin);
	           	                case  3: LPC_GPIO3->FIODIR &=~(1<<pin);
	           	                case  4: LPC_GPIO4->FIODIR &=~(1<<pin);
	           	               }break;
    break;
	}
}
void outputhigh(int puerto,int pin) //Pone en alto el nivel de salida de un pin.
{
switch(puerto)
	                           {
	                            case  0: LPC_GPIO0->FIOSET |= (1<<pin);
	                            case  1: LPC_GPIO1->FIOSET |= (1<<pin);
	                            case  2: LPC_GPIO2->FIOSET |= (1<<pin);
	                            case  3: LPC_GPIO3->FIOSET |= (1<<pin);
	                            case  4: LPC_GPIO4->FIOSET |= (1<<pin);
	                            break;
	                           }
}
void outputlow(int puerto,int pin)//Pone a bajo el nivel de salida de un pin.
{
switch(puerto)
	                           {
	                            case  0: LPC_GPIO0->FIOCLR |= (1<<pin);
	                            case  1: LPC_GPIO1->FIOCLR |= (1<<pin);
	                            case  2: LPC_GPIO2->FIOCLR |= (1<<pin);
	                            case  3: LPC_GPIO3->FIOCLR |= (1<<pin);
	                            case  4: LPC_GPIO4->FIOCLR |= (1<<pin);
	                            break;
	                           }
}
void toggle(int puerto,int pin)//Invierte el nivel de salida de un pin.
{
switch(puerto)
	                           {
	                            case  0: LPC_GPIO0->FIOPIN ^= (1<<pin);
	                            case  1: LPC_GPIO1->FIOPIN ^= (1<<pin);
	                            case  2: LPC_GPIO2->FIOPIN ^= (1<<pin);
	                            case  3: LPC_GPIO3->FIOPIN ^= (1<<pin);
	                            case  4: LPC_GPIO4->FIOPIN ^= (1<<pin);
	                            break;
	                           }
}

uint32_t ifhigh(int puerto,int pin)//Indaga si un pin de un puerto esta en alto nivel.
{
switch(puerto)
		                           {
		                             case  0: return((LPC_GPIO0->FIOPIN & (1<<pin))== 0);
                                     case  1: return((LPC_GPIO1->FIOPIN & (1<<pin))== 0);
                                     case  2: return((LPC_GPIO2->FIOPIN & (1<<pin))== 0);
                                     case  3: return((LPC_GPIO3->FIOPIN & (1<<pin))== 0);
                                     case  4: return((LPC_GPIO4->FIOPIN & (1<<pin))== 0);
									 break;
		                           }
}
void enviar_dato_puerto(int puerto,unsigned int dato) //Pone en alto el nivel de salida de un pin.
{
switch(puerto)
	                           {
                                case  0: LPC_GPIO0->FIOPIN = dato;
	                            case  1: LPC_GPIO1->FIOPIN = dato;
	                            case  2: LPC_GPIO2->FIOPIN = dato;
	                            case  3: LPC_GPIO3->FIOPIN = dato;
	                            case  4: LPC_GPIO4->FIOPIN = dato;
	                            break;
	                           }
}

