/*
 * main-tarjeta_sd.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */

#include "ff.h"
#include "init.h"
#include "monitor.h"
#include "lpc17xx.h"
#include "lpc_types.h"
#include "string.h"
#include "lcd.h"
#include "puertos.h"
int main(void)
{
  DSTATUS errd;
  FRESULT errf;
  char *ptr;
  UINT s2 = 16 * 512;
  FATFS FATFS [1];
  FIL archivo1;

  char Buff[16*512];
  lcd_init_port();
  lcd_init();
  init_in_main ();
  errd = disk_initialize (0);
  errf = f_mount (0, & FATFS [0]);
//Escribir
  errf = f_open(&archivo1, "0:matias.txt", FA_WRITE | FA_CREATE_ALWAYS);
  errf = f_write (&archivo1, "Hola mundo dos\0", 16,&s2);
  errf = f_close (&archivo1);

 ///Leer

  errf = f_open(&archivo1, "0:matias.txt" , FA_READ );
  errf = f_read(&archivo1, Buff, 8192, &s2);
  lcd_gotoxy(1, 2);
  printf_lcd(Buff);
}
