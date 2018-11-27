#include "include.h"
#include "structure.h"
#include "enum.h"

extern unsigned char MODE;

void ONBrake(void)
{  
	int debug = 0;
	int i;

	MODE = nop;
	
	if(debug)	printf("\nALL MODES SET TO NOP");
}
