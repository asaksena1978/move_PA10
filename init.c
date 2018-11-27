#include "include.h"
#include "timer.h"
#include <sys/neutrino.h>
//initialize

extern void initialize_all(void);

void init(void)
{
	int debug = 0;

	if(debug)	printf("\nreached function init");

	ThreadCtl(_NTO_TCTL_IO,0);
	
	if ((chid = ChannelCreate (0)) == -1)
	{
		fprintf (stderr,"timer.c: couldn't create channel!\n");
		printf("\ntimer.c COULDN'T CREATE CHANNEL");
		perror (NULL);
		exit (EXIT_FAILURE);
	}
	else
	if(debug)	printf("\nchannel ID = %d",chid);
  
	setupTimer();
  
	initialize_all();
	if(debug)	printf("\nInit command over ");
}
