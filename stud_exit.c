
/* Exit from Student Database Program */

#include"sdbheader.h"

void exit_(void)
{
	char option;

	printf("\n\tS/s\t: Save & Exit\n");
	printf("\tE/e\t: Exit without Saving\n");
	printf("\t\nEnter Your Choice:  ");
	scanf(" %c",&option);

	switch(option)
	{
		case 'S':
		case 's': save_(); exit(0); break;
		case 'E':
		case 'e': exit(0); break;
		default:  printf("\n\tWrong Choice !!\n"); break;
	}
}
