//SELCET OPERATION MODE - OPERATION - DEFAULT MODE IS SIMULATION MODE

#include "include.h"
#include "structure.h"
#include "enum.h"

extern exe_mode CtrlMode;
extern unsigned char EXECUTION;

void operation_mode(void)
{
	unsigned int debug = 0;

	CtrlMode = operation;
	EXECUTION = 1;

	if(debug)	printf("\nControl Mode -> Operation ");
}


