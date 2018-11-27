#include "include.h"
#include "structure.h"
#include "enum.h"

extern unsigned char MODE;

void ALL_OFFBrake(void)
{
	int debug = 0;
	int i;

	MODE = allbrakeoff_mode;
	
	if(debug)	printf("\nALL JOINTS BRAKE ON");
}
