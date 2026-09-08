#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "student.h"
int count=10;
struct Student s[10];
void createProcesses()
{
    int i;

    if(count==0)
    {
        printf("No students available\n");
        return;
    }

    printf("Parent PID=%d\n\n",getpid());

    for(i = 0;i < count;i++)
    {
        pid_t pid = fork();
        if(pid == 0)
        {
            printf("Student ID   : %d\n", s[i].id);
            printf("Student Name : %s\n", s[i].name);
            printf("PID          : %d\n", getpid());
            printf("PPID         : %d\n", getppid());
	    printf("-----------------------------\n");
            exit(0);
        }
    }
    for(i = 0; i < count; i++)
    {
        wait(NULL);
    }
    printf("All child processes completed\n");
}

