
/* Header file for Student Database Project */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define OPEN 1
#define CLOSE 0

typedef struct student
{
	int roll;
	char name[20];
	float perc;
	struct student *next;
} SDB;

SDB *hp;
char read;

void add_record(void);
int smallest(void);

void delete_record(void);
void delete_roll(void);
void delete_name(void);
void delete_all(void);

void modify_record(void);
void mod_roll(void);
void mod_perc(void);
void mod_name(void);

void sort_record(void);
void sort_name(void);
void sort_perc(void);

int count_record(void);
int count_name(char *);

void reverse_(void);
void show_(void);
void save_(void);
void read_(void);
void exit_(void);
