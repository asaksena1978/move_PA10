#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;


void boff6(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function boff 6");

	brakeoff_joint = 5;

	OFFBrake();

	if(debug)	printf("\n\t 6 axis is brake off!!\n");
}
