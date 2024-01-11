#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>


/* program creates a new descendant process, which displays the message "<child> greetings from descendant". 
The parent process displays the message "<parent> I am PARENT" and then waits for the descendant process 
to finish and displays its exit code 
Compile in a terminal: g++ -o Exercise5 Excercise5.cpp
Run in a terminal: ./Exercise5 */

int main(void)
{
    int status;
    switch (fork())
    {
        case -1: //in case of PARENT error
            printf("<parent> not good, not good...\n");
            break;
        case 0: // for CHILD
            printf("<child> greetings from descendant\n");
            break;
        case 1: // for PARENT
            printf("<parent> I am PARENT\n");
            wait(&status);
            printf("<parent> descendant has ended with result :%d\n", WEXITSTATUS(status));
    }
    return 0;
}