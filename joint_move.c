#include "include.h"
#include "structure.h"
#include "enum.h"
//send parameters - joint angles to joint mode
extern double MOTOR_DES_POS[7];
extern double MOTOR_DES_TIME;
extern unsigned char MODE;
extern unsigned char TRIG;
extern int JOINT;

void joint_moveto(double *Angle, double Time)
{
	int debug = 0;
	int i;

	if(debug)	printf("\nREACHED JOINT MOVE TO FUNCTION");

	for(i = 0; i < 7; i++)
	{
		switch(i)
		{
			case	2:	MOTOR_DES_POS[i] = 0;
				break;

			default:
				MOTOR_DES_POS[i] = *(Angle + i);  
				break;
		}
	}
	MOTOR_DES_TIME = Time;
	TRIG = 1;
	MODE    = joint_mode;

	if(debug)	printf("\njoint move function over");
}
