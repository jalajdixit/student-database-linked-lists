
/* Display the Record on screen */

#include"sdbheader.h"

void show_(void)
{
	SDB *p;
	p=hp;

	printf("\n\n= = = = = = = = = = = = = = = = = = = =\n");
	while(p)
	{
		printf("%2d  %10s  %.2f\n",p->roll,p->name,p->perc);
		p=p->next;
	}
	printf("= = = = = = = = = = = = = = = = = = = =\n");
}
