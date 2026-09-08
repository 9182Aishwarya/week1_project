#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        pid_t pid = fork();

        if(pid == 0)
        {
            printf("Student %d Process\n", i);
            printf("PID  = %d\n", getpid());
            printf("PPID = %d\n", getppid());

            sleep(2);

            printf("Student %d Task Completed\n\n", i);

            exit(0);
        }
    }

    for(i = 1; i <= 10; i++)
    {
        wait(NULL);
    }

    printf("Parent Process Completed\n");
    printf("Parent PID = %d\n", getpid());

    return 0;
}
