
/* Delete Record from Student database */

#include"sdbheader.h"

void delete_record(void)
{
	char option;

	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	printf("\n\tR/r\t: Delete by Roll No.\n");
	printf("\tN/n\t: Delete by Name\n");
        printf("\t\nEnter Your Choice:  ");
	scanf(" %c",&option);

	switch(option)
	{
		case 'R':
		case 'r': delete_roll(); break;
		case 'N':
		case 'n': delete_name(); break;
		default:  printf("\n\tWrong Choice !!\n"); break;
	}
}

void delete_roll(void)
{
	int ro;
	SDB *prev,*last;

	printf("\nEnter RollNo. to Delete:  ");
	scanf("%d",&ro);

	last=hp;
	while(last)
	{
		if(last->roll==ro)
		{
			if(hp==last)
				hp=last->next;
			else
				prev->next=last->next;
			free(last);
			return;
		}
		prev=last;
		last=last->next;
	}
	printf("\n\t%d Roll no. not present !!\n",ro);
}

void delete_name(void)
{
	int nc;
	char name[20];
	SDB *last,*prev;

	printf("\nEnter Name to Delete:  ");
	scanf("%s",name);

	nc=count_name(name);

	if(nc==0)
	{
		printf("\n\t%s not present\n",name);
		return;
	}
	else if(nc==1)
	{
		last=hp;
		while(last)
		{
			if(strcmp(last->name,name)==0)
			{
				if(hp==last)
					hp=last->next;
				else
					prev->next=last->next;
				free(last);
				return;
			}
			prev=last;
			last=last->next;
		}
	}
	else
	{
		printf("\nRecords with %s name are:\n",name);
		last=hp;
		while(last)
		{
			if(strcmp(last->name,name)==0)
				printf("%2d  %10s  %.2f\n",last->roll,last->name,last->perc);
			last=last->next;
		}
		delete_roll();
	}
}

void delete_all(void)
{
	SDB *temp;

	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	while(hp)
	{
		temp=hp;
		hp=hp->next;
		free(temp);
	}
}
