
/* Count Records in a Database */

#include"sdbheader.h"

int count_name(char *name)
{
	SDB *p;
	p=hp;
	int count=0;

	while(p)
	{
		if(strcmp(p->name,name)==0)
			count++;
		p=p->next;
	}
	return count;
}

int smallest(void)
{
	int rn=0;
	SDB *p;
	p=hp;

	if(hp==0)
	return ++rn;
	else
	{
		++rn;
		while(p->roll==rn)
		{
			p=p->next;
			rn++;
			if(p==0)
			return rn;
		}
		return rn;
	}
}

int count_record(void)
{
	int recs=0;
	SDB *p;
	p=hp;

	while(p)
	{
		recs++;
		p=p->next;
	}
	return recs;
}
