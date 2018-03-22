
/* Reverse the Records of Student Database */

#include"sdbheader.h"

void reverse_(void)
{
	SDB *p,*q,*r;
	p=hp;
	q=r=0;

	if(hp==0)
	{
		printf("\n\tNO Record Available !!\n");
		return;
	}

	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	hp=q;
}
