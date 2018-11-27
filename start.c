#include "include.h"
#include "timer.h"
#include "structure.h"
#include "./Arcnet/arc_pci.h"
#include <time.h>

#define OFF	0


extern unsigned char EXECUTION;
extern unsigned char initialization_check_flag;
extern int ctrlEndFlag;
int ctrltrig = OFF;
extern timer_t timerid;
extern struct itimerspec timer;
extern unsigned char TRIG;
extern int JOINT;
extern unsigned char MODE;
extern double MOTOR_DES_TIME;
extern double MOTOR_DES_POS[7];

extern void ctrlTask(void);
//extern void arcnet_start(void);


void start(void)
{
	int debug = 0;
	static int print_once_flag[7] = {1, 1, 1, 1, 1, 1, 1};
	int i;
	
	if(initialization_check_flag == 0)
	{
		init();		//initializes path and log data
		initialization_check_flag = 1;
	}
	if(EXECUTION)
	{
		arcnet_start();	//calls system drivers
		if(debug)	printf("\nCALLED arcent start function");
	}

	timer_settime(timerid, 0, &timer, NULL);

	ctrltrig = 1;
	ctrlEndFlag = 1;

	if(debug)
	{
		printf("\nINSIDE START FUNCTION");
		for(i = 0; i < 7; i++)
		{
			if(print_once_flag[i])
			{
				printf("\nmotor%d trig = %d",i+1, TRIG);
				printf("\nmotor %d mode = %d",i+1, MODE);
				printf("\nmotor %d desired position = %lf",i+1, MOTOR_DES_POS[i]);
				printf("\nmotor %d desired time = %lf",i+1, MOTOR_DES_TIME);

				print_once_flag[i] = 0;
			}
			
		}
	}
	
	ctrlTask();	//call function to receive input and take call desired function
}

