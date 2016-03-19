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
int main(void)
{
  DSTATUS errd;
  FRESULT errf;
  char *ptr;
  UINT s2 = 8 * 512;
  FATFS FATFS [1];
  FIL archivo1;

  init_in_main ();
  errd = disk_initialize (0);
  errf = f_mount (0, & FATFS [0]);
  errf = f_open(&archivo1, "0:matias.txt", FA_WRITE | FA_CREATE_ALWAYS);
  errf = f_write (&archivo1, "Hola mundo", 11,&s2);
  errf = f_close (&archivo1);
}