#include "include.h"
#include "structure.h"

extern void joint_moveto(double *,double);

void allzero(void)
{
	int i;
	int debug = 0;
	double angle;
	double angle_arr[7];
	double desTime;

	printf("\nREACHED ALL ZERO FUNCTION");

	desTime = 10.;
	angle = 0. * DEG2RAD;

	for(i = 0; i < 7; i++)
	{
		if(i == 2)	angle_arr[i] = 0;
		else		angle_arr[i] = angle;
	}

	joint_moveto(angle_arr, desTime);

 	if(debug) 	printf("\n\t Joint Control --- allzero!!\n\n");
}
