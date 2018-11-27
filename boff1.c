#include "include.h"

extern void OFFBrake(void);

int brakeoff_joint;

void boff1(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function BOFF1");

	brakeoff_joint = 0;

	OFFBrake();

	if(debug)	printf("\n\t 1 axis is brake off!!\n");
}
