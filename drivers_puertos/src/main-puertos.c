/*
 * main-puertos.c
 *
 *  Created on: 30/8/2015
 *  Author: Matias Leandro Ferraro
 */

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif
// TODO: insert other include files here

#include "puertos.h"


// TODO: insert other definitions and declarations here

int main(void) {
	                        init_port(PTO_2,PIN_7,ENTRADA);
	    	        	    init_port(PTO_2,PIN_6,ENTRADA);
	    	        	    init_port(PTO_2,PIN_5,ENTRADA);
	    	        	    init_port(PTO_2,PIN_4,ENTRADA);
	    	            	init_port(PTO_2,PIN_12,SALIDA);
	    	        	    init_port(PTO_2,PIN_11,SALIDA);
	    	        	    init_port(PTO_2,PIN_10,SALIDA);
	    	        	    init_port(PTO_2,PIN_8,SALIDA);

     while(1) {
            	if(ifhigh(PTO_2,PIN_7)==ALTO) outputhigh(PTO_2,PIN_12);
                if(ifhigh(PTO_2,PIN_7)==BAJO) outputlow(PTO_2,PIN_12);
                if(ifhigh(PTO_2,PIN_6)==ALTO) outputhigh(PTO_2,PIN_11); else outputlow(PTO_2,PIN_11);
    	        if(ifhigh(PTO_2,PIN_5)==ALTO) outputhigh(PTO_2,PIN_10); else outputlow(PTO_2,PIN_10);
    	        if(ifhigh(PTO_2,PIN_4)==ALTO) outputhigh(PTO_2,PIN_8);  else outputlow(PTO_2,PIN_8);
               }
    return 0 ;
}


