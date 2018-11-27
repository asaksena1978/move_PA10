#include "include.h"
#include "structure.h"
#include <pthread.h>
//release thread
extern int ctrlEndFlag;
extern pthread_mutex_t mutex;


void endTask(void)
{
	int i;
	int debug = 0;

	if(debug)	printf("\nREACHED FUNCTION ENDTASK");
	if(debug)	printf("\nPOSITION\tVELOCITY\tACCELERATION");

	ctrlEndFlag = 1;
	pthread_mutex_unlock(&mutex);

	if(debug)	printf("\nEND TASK OVER\nMUTEX UNLOCKED");
	if(debug)	printf("\nEND - MUTEX UNLOCKED");
}
