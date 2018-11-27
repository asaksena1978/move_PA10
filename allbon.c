#include "include.h"

extern void ONBrake(void);

void allbon(void)
{
	int debug = 0;

	if(debug)	printf("\nREACHED FUNCTION ALL BRAKE ON");

	ONBrake();
  
	if(debug)	printf("\n\tAll axes are brake on!!\n");
}
