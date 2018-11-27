#include "include.h"
#include "structure.h"
#include "enum.h"

extern unsigned char MODE;
extern int JOINT;
extern int brakeoff_joint;

void OFFBrake(void)
{
  	int debug = 0;

	MODE = brakeoff_mode;
	JOINT = brakeoff_joint;

	if(debug)	printf("\nOFF BRAKE FUNCTION OVER");
}
