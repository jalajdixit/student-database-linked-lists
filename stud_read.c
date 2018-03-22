
/* Load Records from Student Database File */

#include"sdbheader.h"

void read_(void)
{
	SDB *new,*last,var;
	FILE *fp;

	fp=fopen("database","r");
	if(fp==0)
	{
		printf("\tDatabase File Not Present\n");
		return;
	}

	read='y';
	while(fscanf(fp,"%d %s %f",&var.roll,var.name,&var.perc)!=-1)
	{
		new=malloc(sizeof(SDB));
		*new=var;

		if(hp==0)
		{
			new->next=hp;
			hp=new;
			last=new;
		}
		else
		{
			new->next=last->next;
			last->next=new;
			last=new;
		}
	}

	fclose(fp);
}
