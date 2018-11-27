#include <stdio.h>
#include "timer.h"
#include "main.h"
#include <sys/neutrino.h>
#include <errno.h>
#include <time.h>


#define EXIT_FAILURE -1


int debug = 0;
int chid;
timer_t timerid;
struct itimerspec timer;

void setupTimer (void)
{
	struct sigevent event;
	int coid;
	char *funcname = "setupTimer";

	if(debug)	printf("\nREACHED TIMER FUNCTION");
    
	coid = ConnectAttach (0, 0, chid, 0, 0);
    
	if(coid == -1)
	{
        	fprintf (stderr, "%s: couldn't ConnectAttach!\n",funcname);
		printf("\nCould not connect attach %s", funcname);
        	perror (NULL);
        	exit (EXIT_FAILURE);
   	 }
    
	 if(debug) printf("Connect Attach done well\n");
    
	SIGEV_PULSE_INIT(&event, coid, SIGEV_PULSE_PRIO_INHERIT, CODE_TIMER, 0);
    
	if (timer_create (CLOCK_REALTIME, &event, &timerid) == -1)
	{
       		 fprintf (stderr, "%s: can't timer_create,errno %d\n",funcname, errno);
		printf("\n%s can't create timer errno = %d", funcname, errno);
        	perror (NULL);
        	exit (EXIT_FAILURE);
    	}
   
    
     	timer.it_value.tv_sec = 0;
   	timer.it_value.tv_nsec = nTICKS;
   	timer.it_interval.tv_sec = 0;
   	timer.it_interval.tv_nsec = nTICKS;
   	if(debug)	fprintf(stderr,"Control Frequency = %d [Hz]\n",(int)(FREQ));
}
