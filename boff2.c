#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;


void boff2(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function boff 2");

	brakeoff_joint = 1;

	OFFBrake();

	if(debug)	printf("\n\t 2 axis is brake off!!\n");
}
