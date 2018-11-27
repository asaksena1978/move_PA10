#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;


void boff5(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function boff 5");

	brakeoff_joint = 4;

	OFFBrake();

	if(debug)	printf("\n\t 5 axis is brake off!!\n");

}
