#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Similar example as in Exercise 5, but this time exit() and atexit() were used.
Compile in a terminal: g++ -o Exercise6 Excercise6.cpp
Run in a terminal: ./Exercise6 */

int main(void)
{
    int status;
    void bye(void);
    (void)atexit(bye);

    switch(fork())
    {
        case -1:
            printf("descendant running error\n");
            break;
        case 0:
            exit(EXIT_SUCCESS);
            break;
        default:
            wait(&status);
            if (status)
            {
                printf("Return error\n");
                exit(EXIT_FAILURE);
            }           
    }
    return EXIT_SUCCESS;
}

void bye(void)
{
    printf("...and that's all in [%d]\n", (int)getpid());
    return 0;
}