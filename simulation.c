//SELCET OPERATION MODE SIMULATION - DEFAULT MODE IS SIMULATION MODE

#include "include.h"
#include "structure.h"
#include "enum.h"

extern exe_mode CtrlMode;
extern unsigned char EXECUTION;


void simulation_mode(void)
{
	int debug = 1;

	CtrlMode = simulation;
	EXECUTION = 0;

	if(debug)	printf("\nControl Mode -> Simulation ");
}
