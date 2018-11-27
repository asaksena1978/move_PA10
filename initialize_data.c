#include "include.h"
#include "structure.h"
#include "enum.h"
//initialize log data 
extern unsigned char initialization_check_flag;
extern status des_j[7], cur_j[7];

path path_j[7];
double MOTOR_DES_POS[7];
double MOTOR_DES_TIME;
unsigned char MODE;
int JOINT;
unsigned char TRIG;



void initializeData(void)
{
	int debug = 0;
	int i;
	int j;


	if(debug)	printf("\nInitialize data motor structure");													JOINT = 8;
	MODE = nop;
	MOTOR_DES_TIME = 0;
	for(i = 0; i < 7; i++)
	{
		MOTOR_DES_POS[i] = 0.0 * DEG2RAD;


		for(j = 0; j < 6; j++)
		{
			path_j[i].pos[j] = 0;
		}
		for(j = 0; j < 5; j++)
		{
			path_j[i].vel[j] = 0;
		}
		for(j = 0; j < 4; j++)
		{
			path_j[i].acc[j] = 0;
		}

		des_j[i].pos = 0.0;
		des_j[i].vel = 0.0;
		des_j[i].acc = 0.0;

/*		cur_j[i].pos = 0.0;		
		cur_j[i].vel = 0.0;
		cur_j[i].acc = 0.0;*/

		cur_j[i].pos = 0.0;		
		cur_j[i].vel = 0.0;
		cur_j[i].acc = 0.0;

	}


	if(debug)
	{
		for(i = 0; i < 7; i++)
		{
			printf("\njoint%d => trig = %d, mode = %d, despos = %lf, destime = %lf",i+1, TRIG, MODE, MOTOR_DES_POS[i], MOTOR_DES_TIME);
		}
		
		initialization_check_flag = 1;
		printf("\nintialization over\n> ");
	}
}
