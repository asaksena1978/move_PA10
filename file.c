#include "include.h"
#include "structure.h"
#include <fcntl.h>
//LOG time stamped data
extern unsigned char EXECUTION;
extern path path_j[7];
extern double TM[7][MAX_LEN];
extern double POS[7][MAX_LEN];
extern double VEL[7][MAX_LEN];
extern double ACC[7][MAX_LEN];
extern double TORQ[7][MAX_LEN];
extern double CUR_POS[7][MAX_LEN];

/*double ANGLE_ARCNET[7][MAX_LEN];
double SET_TORQ[7][MAX_LEN];
double SET_TORQ_COM_DRIVE[7][MAX_LEN];
double SEND_C_COM_TORQ[7][MAX_LEN];
double SEND_C_TORQ[7][MAX_LEN];*/


void file_write(void)
{
	long i;
	int debug = 0;
	int file_write_flag = 1;
	FILE *fp;


	//log torque data
	fp = fopen("torque.txt", "w");
		
	if(fp == NULL)
	{
		printf("\nCAN NOT OPEN FILE torque.txt");
	}
	else
	{
		if(debug)
		{
			printf("\nfile torque.txt open success");
			fprintf(fp,"\nTIME\tTORQ-0\tTORQ-1\tTORQ-2\tTORQ-3\tTORQ-4\tTORQ-5\tTORQ-6");
		}
	}

	for(i = 0; i < MAX_LEN; i++)
	{

		fprintf(fp, "\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf",TM[0][i], TORQ[0][i], TORQ[1][i], TORQ[2][i], TORQ[3][i], TORQ[4][i], TORQ[5][i], TORQ[6][i]);
	}

	fclose(fp);
	if(debug)	printf("\nTORQUE FILE WRITE OVER");
/////////////////////////////////////////////////////////////////////////////





	//log pose info
	fp = fopen("current_position.txt", "w");
		
	if(fp == NULL)
	{
		printf("\nCAN NOT OPEN FILE current_position.txt");
	}
	else
	{
		if(debug)
		{
			printf("\nfile current_position.txt open success");
			fprintf(fp,"\nTIME\tcur_pos-0\tcur_pos-1\tcur_pos-2\tcur_pos-3\tcur_pos-4\tcur_pos-5\tcur_pos-6");
		}
	}

	for(i = 0; i < MAX_LEN; i++)
	{

		fprintf(fp, "\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf",TM[0][i], CUR_POS[0][i], CUR_POS[1][i], CUR_POS[2][i], CUR_POS[3][i], CUR_POS[4][i], CUR_POS[5][i], CUR_POS[6][i]);
	}

	fclose(fp);
	if(debug)	printf("\nCURRENT POSITION FILE WRITE OVER");

/////////////////////////////////////////////////////////////////////////////

	//log joint data
	fp = fopen("position.txt", "w");
		
	if(fp == NULL)
	{
		printf("\nCAN NOT OPEN FILE position.txt");
	}
	else
	{
		if(debug)
		{
			printf("\nfile position.txt open success");
			fprintf(fp,"\nTIME\tPOS-0\tPOS-1\tPOS-2\tPOS-3\tPOS-4\tPOS-5\tPOS-6");
		}
	}

	for(i = 0; i < MAX_LEN; i++)
	{
		if(file_write_flag)
		fprintf(fp, "\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf",TM[0][i], POS[0][i], POS[1][i], POS[2][i], POS[3][i], POS[4][i], POS[5][i], POS[6][i]);
	}

	fclose(fp);
	if(debug)	printf("\n POSITION FILE WRITE OVER");
/////////////////////////////////////////////////////////////////////////////

	//log joint velocity
	fp = fopen("velocity.txt", "w");
		
	if(fp == NULL)
	{
		printf("\nCAN NOT OPEN FILE velocity.txt");
	}
	else
	{
		if(debug)
		{
			printf("\nfile velocity.txt open success");
			fprintf(fp,"\nTIME\tVEL-0\tVEL-1\tVEL-2\tVEL-3\tVEL-4\tVEL-5\tVEL-6");
		}
	}

	for(i = 0; i < MAX_LEN; i++)
	{
		fprintf(fp, "\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf",TM[0][i], VEL[0][i], VEL[1][i], VEL[2][i], VEL[3][i], VEL[4][i], VEL[5][i], VEL[6][i]);
	}

	fclose(fp);
	if(debug)	printf("\nVELOCITY FILE WRITE OVER");
/////////////////////////////////////////////////////////////////////////////


	//log joint acc
	fp = fopen("accleration.txt", "w");
		
	if(fp == NULL)
	{
		printf("\nCAN NOT OPEN FILE accleration.txt");
	}
	else
	{
		if(debug)
		{
			printf("\nfile accleration.txt open success");
			fprintf(fp,"\nTIME\tACC-0\tACC-1\tACC-2\tACC-3\tACC-4\tACC-5\tACC-6");
		}
	}

	for(i = 0; i < MAX_LEN; i++)
	{

		fprintf(fp, "\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf",TM[0][i], ACC[0][i], ACC[1][i], ACC[2][i], ACC[3][i], ACC[4][i], ACC[5][i], ACC[6][i]);
	}

	fclose(fp);
	if(debug)	printf("\nACCELERATION FILE WRITE OVER");
/////////////////////////////////////////////////////////////////////////////


	printf("\nFILE WRITE OVER");
}
