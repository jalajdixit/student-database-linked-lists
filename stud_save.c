
/* Save Student Database into a File */

#include"sdbheader.h"

void save_(void)
{
	SDB *p;
	char cont,filename[20];
	FILE *fp;
	
	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	if(read)
	{
		fp=fopen("database","w");
		p=hp;

		while(p)
		{
			fprintf(fp,"%2d  %10s  %.2f\n",p->roll,p->name,p->perc);
			p=p->next;
		}

		fclose(fp);
		return;
	}
	else
	{
		printf("\n\tPrevious Records from Database file has not been Loaded\n");
		printf("\tSaving will Overwrite Old Database File.\n\tContinue [Y/y]:  ");
		scanf(" %c",&cont);

		if(cont=='y' || cont=='Y')
		{
			read='Y';
			save_();
			return;
		}
		else
		{
			printf("Save with New Name:  ");
			scanf("%s",filename);
		
			fp=fopen(filename,"w");
			p=hp;

			while(p)
			{
				fprintf(fp,"%2d  %10s  %.2f\n",p->roll,p->name,p->perc);
				p=p->next;
			}

			fclose(fp);
			return;
		}
	}
}
