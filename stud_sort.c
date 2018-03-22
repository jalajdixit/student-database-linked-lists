
/* Sort the Student Database by Name or by Percentage */

#include"sdbheader.h"

void sort_record(void)
{
	char option;

	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	printf("\n\tP/p\t: Sort by Percentage\n");
	printf("\tN/n\t: Sort by Name\n");
	printf("\t\nEnter Your Choice:  ");
	scanf(" %c",&option);

	switch(option)
	{
		case 'P':
		case 'p': sort_perc(); break;
		case 'N':
		case 'n': sort_name(); break;
		default:  printf("\n\tWrong Choice !!\n"); break;
	}
}

void sort_name(void)
{
	int recs,i,j;
	SDB **p,*last,*temp,var;

	recs=count_record();
	if(recs==1)
	return;

	p=malloc(sizeof(SDB*)*recs);
	last=hp;
	for(i=0;i<recs;i++)
	{
		p[i]=last;
		last=last->next;
	}

	for(i=0;i<recs-1;i++)
	{
		for(j=0;j<recs-1-i;j++)
		{
			if(strcmp(p[j]->name,p[j+1]->name)>0)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

	printf("\n\n= = = = = = = = = = = = = = = = = = = =\n");
	printf("\tSorted by Name \n");
	printf("= = = = = = = = = = = = = = = = = = = =\n");
	for(i=0;i<recs;i++)
	printf("%2d  %10s  %.2f\n",p[i]->roll,p[i]->name,p[i]->perc);
	printf("= = = = = = = = = = = = = = = = = = = =\n");

	free(p);
}

void sort_perc(void)
{
	int recs,i,j;
	SDB **p,*last,*temp,var;

	recs=count_record();
	if(recs==1)
	return;

	p=malloc(sizeof(SDB*)*recs);
	last=hp;
	for(i=0;i<recs;i++)
	{
		p[i]=last;
		last=last->next;
	}

	for(i=0;i<recs-1;i++)
	{
		for(j=0;j<recs-1-i;j++)
		{
			if(p[j]->perc>p[j+1]->perc)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

	printf("\n\n= = = = = = = = = = = = = = = = = = = =\n");
	printf("\tSorted by Percentage \n");
	printf("= = = = = = = = = = = = = = = = = = = =\n");
	for(i=0;i<recs;i++)
	printf("%2d  %10s  %.2f\n",p[i]->roll,p[i]->name,p[i]->perc);
	printf("= = = = = = = = = = = = = = = = = = = =\n");
	free(p);
}
