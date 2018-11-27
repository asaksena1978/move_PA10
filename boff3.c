#include "include.h"

extern void OFFBrake(void);

extern int brakeoff_joint;

void boff3(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function BOFF3");

	brakeoff_joint = 2;

//	OFFBrake();
	printf("\nJOINT 3 IS LOCKED");

	if(debug)	printf("\n\t 3 axis is brake off!!\n");
}
