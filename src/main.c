#include<stdio.h>
#include"student.h"
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.add student\n");
		printf("2.Display Students\n");
		printf("3.Exists\n");
		printf("enter choice; ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addStudent();
				break;
			case 2:
				createProcesses();
				break;
			case  3:
				return 0;
			default:
				printf("INVALID CHOICE\n");
		}
	}
	return 0;
}
