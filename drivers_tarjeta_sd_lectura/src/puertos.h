/*
 * puertos.h
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */
#define PIN_3    3
#define PIN_0    0
#define PIN_1    1
#define PIN_2    2
#define PIN_4    4
#define PIN_5    5
#define PIN_7    7
#define PIN_6    6
#define PIN_8    8
#define PIN_9    9
#define PIN_10   10
#define PIN_11   11
#define PIN_12   12
#define PIN_22   22
#define PIN_21   21
#define PIN_27   27
#define PIN_28   28
#define PIN_13   13
#define PTO_0    0
#define PTO_2    2
#define ENTRADA  0
#define SALIDA   1
#define ALTO     1
#define BAJO     0
#define SI       1
#define NO       0
void init_port(int puerto,int pin,int modo);//Inicializa un pin de un puerto.
void outputhigh(int puerto,int pin);        //Pone en alto el nivel de salida de un pin.
void outputlow(int puerto,int pin);         //Pone a bajo el nivel de salida de un pin.
void toggle(int puerto,int pin);            //Invierte el nivel de salida de un pin.
uint32_t ifhigh(int puerto,int pin);        //Indaga si un pin de un puerto esta en alto nivel.


