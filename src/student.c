#include <stdio.h>
#include "student.h"

struct Student s[10];
int count=0;

void addStudent()
{
    if(count>=10)
    {
        printf("Maximum 10 students allowed\n");
        return;
    }
printf("Enter ID: ");
    scanf("%d",&s[count].id);
    printf("Enter Name: ");
    scanf("%s",s[count].name);
    count++;
}
void display()
{
    int i;
    if(count==0)
    {
        printf("No Students Available\n");
        return;
    }
    printf("\nStudent Details\n");

    for(i=0;i<count;i++)
    {
  printf("ID: %d\tName: %s\n",s[i].id,s[i].name);
    }
}
