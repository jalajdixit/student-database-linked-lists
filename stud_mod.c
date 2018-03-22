
/* Modify an Existing Record in a Database */

#include"sdbheader.h"

void modify_record(void)
{
	char option;

	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	printf("\n\tR/r\t: Modify by Roll No.\n");
	printf("\tP/p\t: Modify by Percentage\n");
	printf("\tN/n\t: Modify by Name\n");
	printf("\t\nEnter Your Choice:  ");
	scanf(" %c",&option);

	switch(option)
	{
		case 'R':
		case 'r': mod_roll(); break;
		case 'P':
		case 'p': mod_perc(); break;
		case 'N':
		case 'n': mod_name(); break;
		default:  printf("\n\tWrong Choice !!\n"); break;
	}
}

void mod_roll(void)
{
	int rn;
	SDB *p;

	printf("\nRoll Number you want to Modify:  ");
	scanf("%d",&rn);

	p=hp;
	while(p)
	{
		if(p->roll==rn)
		{
			printf("\nFollowing Data of %d Roll No. present\n",rn);
			printf("%2d  %10s  %.2f\n",p->roll,p->name,p->perc);
			printf("Enter New Name & Percentage:\n");
			scanf("%s %f",p->name,&p->perc);
			return;
		}
		p=p->next;
	}
	printf("No Record with %d RollNo. found !!\n",rn);
	return;
}

void mod_perc(void)
{
	float per;
	printf("Enter the Percentage :  ");
	scanf("%f",&per);
	mod_roll();
	return;
}

void mod_name(void)
{
	char nam[20];
	printf("Enter the Name :  ");
	scanf("%s",nam);
	mod_roll();
	return;
}
