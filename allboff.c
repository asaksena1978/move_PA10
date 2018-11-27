#include <stdio.h>

extern void ALL_OFFBrake(void);

void allboff(void)
{
	int debug = 0;


	if(debug)	printf("\nreached function all boff");

	ALL_OFFBrake();
}

