#include<stdio.h>
#include "student.h"
/*struct Student
{
	int id;
	char name[30];
};

struct Student s[10];
int count=0;
*/
void addStudent()
{
	printf("Enter ID:");
	scanf("%d",&s[count].id);
	printf("enter name:");
	scanf("%s",s[count].name);
	count++;
}
/*void display()
{
	int i;
	printf("\nStudent Details\n");
	for(i=0;i<count;i++)
	{
		printf("ID: %d Name:%s\n",s[i].id,s[i].name);
	}
}*/

