#include <stdio.h>
#include "student.h"
int main()
{
    int choice;
    while(1)
    {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Create Processes\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
	scanf("%d", &choice);
	switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                display();
                break;

            case 3:
                createProcesses();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
