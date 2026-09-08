#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "student.h"

void createProcesses()
{
    int i;
    if(count==0)
    {
        printf("No students available\n");
        return;
    }
    printf("\nParent Process\n");
    printf("PID = %d\n\n", getpid());
    for(i=0;i<count;i++)
    {
        pid_t pid=fork();

        if(pid==0)
        {
            printf("Student Process Created\n");
            printf("Student ID   : %d\n", s[i].id);
            printf("Student Name : %s\n", s[i].name);
            printf("PID          : %d\n", getpid());
            printf("PPID         : %d\n", getppid());
            printf("---------------------------\n");
	    exit(0);
        }
    }
    for(i=0;i<count;i++)
    {
        wait(NULL);
    }
    printf("\nAll Child Processes Completed\n");
}
