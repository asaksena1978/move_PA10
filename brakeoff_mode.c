#include "include.h"
#include "./Arcnet/arc_pci.h"

extern unsigned char EXECUTION;

extern void BrakeOFF(int);

void brakeoff(int joint)
{
	int debug = 0;

	if(debug)
	{
		printf("\nreached brakeoff function");
		printf("\nCALLING ARCNET FUNCTION BrakeOFF");
	}
	
	if(EXECUTION)	BrakeOFF(joint);
}
