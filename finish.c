#include "include.h"
#include "structure.h"
#include "enum.h"
#include "./Arcnet/arc_pci.h"
#include <time.h>
//finish excution and log data
extern int ctrltrig;
extern timer_t timerid;
extern unsigned char EXECUTION;
extern exe_mode CtrlMode;

extern void file_write(void);
extern void ONBrake(void);

int cpflag = 1;
int WRITE_FILE_FLAG = 1;

void fin(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function finish");
	cpflag = 0;
	ctrltrig = 0;
	if(EXECUTION)	arcFin();      
	timer_delete(timerid);

	if(debug)	printf("\nchange cpflag in finish function = %d",cpflag);


	
	ONBrake();          

	if(WRITE_FILE_FLAG)
		file_write();

	printf("\nEXECUTION OVER");
}
