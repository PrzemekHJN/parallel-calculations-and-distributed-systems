#include<stdio.h>
#include<unistd.h>

/* program is to obtain the process identifiers (PID) 
and parent process identifiers (PPID) of the currently running program. 
Compile in a terminal: g++ -o Exercise1 Excercise1.cpp
Run in a terminal: ./Exercise1 */

int main( void )
{
printf("Current ID\t%d\n",(int)getpid());
printf("Parent ID\t%d\n",(int)getppid());
return 0;
}