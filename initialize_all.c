#include "include.h"
#include "structure.h"
#include "./Arcnet/arc_pci.h"


unsigned char EXECUTION = 0;

extern void initializeData(void);
extern int arcInit(void);

void initialize_all(void)
{
	int debug = 0;

	initializeData();
	if(debug)	printf("\nintialize data over");
  
    	if(EXECUTION)
	{
		arcInit(); 

		printf("\nCALL ARC INIT FUNCTION");
	}
}


