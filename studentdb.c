
/* Main File of Student data base project */

#include"sdbheader.h"

void main()
{
	char option,load;

	printf("Load Records from Database file [Y/y]:  ");
	scanf(" %c",&load);

	if(load=='y' || load=='Y')
	read_();

	while(1)
	{
//		system("clear");
		printf("\n\n****** STUDENT RECORD MENU ******\n");
		printf("----------------------------------\n");
		printf("\ta/A\t: Add New record\n");
		printf("\tm/M\t: Modify a Record\n");
		printf("\ts/S\t: Show the List\n");
		printf("\td/D\t: Delete a Record\n");
		printf("\tl/L\t: Delete All records\n");
		printf("\tt/T\t: Sort the List\n");
		printf("\tr/R\t: Reverse the List\n");
		printf("\tv/V\t: Save\n");
		printf("\te/E\t: Exit\n");
		printf("\t\nEnter Your Choice:  ");
		scanf(" %c",&option);

		switch(option)
		{
			case 'a':
			case 'A': add_record(); break;
			case 'd':
			case 'D': delete_record(); break;
			case 's':
			case 'S': show_(); break;
			case 'm':
			case 'M': modify_record(); break;
			case 'v':
			case 'V': save_(); break;
			case 'e':
			case 'E': exit_(); break;
			case 't':
			case 'T': sort_record(); break;
			case 'l':
			case 'L': delete_all(); break;
			case 'r':
			case 'R': reverse_(); break;
			default:  printf("Wrong Choice !!\n"); break;
		}
	}
}
