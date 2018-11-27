#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;


void boff7(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function boff 7");

	brakeoff_joint = 6;

	OFFBrake();

	if(debug)	printf("\n\t 7 axis is brake off!!\n");
}
