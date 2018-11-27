#include "structure.h"
#include <stdio.h>


extern void joint_moveto(double *, double);

void ten(void)
{
	double angle;
	double angle_arr[7];
	double desTime;
	int debug = 0;
	int i;

	if(debug)	printf("\nREACHED ALL TEN FUNCTION");

	desTime = 10.;

	angle = 10. * DEG2RAD;

	for(i = 0; i < 7; i++)
	{
		if(i == 2)	angle_arr[i] = 0;
		else		angle_arr[i] = angle;

	}
	joint_moveto(angle_arr, desTime);
	if(debug)  	printf("\n\t Joint Control --- allten!!\n\n");
}
