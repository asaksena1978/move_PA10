#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;


void boff4(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function boff 4");

	brakeoff_joint = 3;

	OFFBrake();

	if(debug)	printf("\n\t 4 axis is brake off!!\n");

}
