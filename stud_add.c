
/* Adding New Record in Descending Order */

#include"sdbheader.h"

void add_record(void)
{
	char rep;
	int rollnum;
	SDB *new,*last;

	new=malloc(sizeof(SDB));
	rollnum=smallest();
	printf("\nRoll No: %2d",rollnum);
	new->roll=rollnum;
	printf("\nName  Percentage\n");
	scanf("%s %f",new->name,&new->perc);

	if(hp==0 || hp->roll>new->roll)
	{
		new->next=hp;
		hp=new;
	}
	else
	{
		last=hp;
		while(last)
		{
			if(last->next==0 || last->next->roll>new->roll)
			{
				new->next=last->next;
				last->next=new;
				break;
			}
			last=last->next;
		}
	}
}
