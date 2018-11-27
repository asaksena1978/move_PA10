#include "include.h"
#include "./Arcnet/arc_pci.h"

extern unsigned char EXECUTION;

void Nop(void)
{
	int debug = 0;

	if(debug)
	{
		printf("\nREACHED Nop FUNCTION");
		printf("\nCALL ARCNET NoTorq Function");
	}
	if(EXECUTION) NoTorq();
}
