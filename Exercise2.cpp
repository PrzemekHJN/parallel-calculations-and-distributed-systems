#include<stdlib.h>

/* code is used to execute the ps command with the appropriate 
options and display information about processes, including their PIDs, 
parent process PPIDs and commands executed by those processes
Compile in a terminal: g++ -o Exercise2 Excercise2.cpp
Run in a terminal: ./Exercise2 */

int main( void )
{
system( "ps -o pid,ppid,cmd" );
return 0;
}
