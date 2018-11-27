#include "structure.h"
#include <stdio.h>

//joint mode - move each joint by 5 degrees
extern void joint_moveto(double *,double);

void five(void)
{
	double angle;
	double angle_arr[7];
	double desTime;
	int debug = 0;
	int i;

	if(debug)	printf("\nREACHED ALL five FUNCTION");

	desTime = 10.;

	angle = 5. * DEG2RAD;

	for(i = 0; i < 7; i++)
	{
		if(i == 2)	angle_arr[i] = 0;
		else		angle_arr[i] = angle;
	}

	joint_moveto(angle_arr, desTime);

	if(debug)  	printf("\n\t Joint Control --- allfive!!\n\n");
}
