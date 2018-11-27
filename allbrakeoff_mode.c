#include "include.h"
#include "./Arcnet/arc_pci.h"

extern void AllBrakeOFF(void);

void allbrakeoff(void)
{
	int debug = 0;

	if(debug)
	{
		printf("\nREACHED ALLBREAKEOFF function");
		printf("\nCALLING ARCNET FUNCTION ALLBrakeOFF FUNCTION");
	}

	AllBrakeOFF();
}
