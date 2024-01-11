#include <stdio.h>


/* program starts by processing the arguments passed to the program. 
It then iterates through these arguments and prints them out on the screen 
with their corresponding indexes. Each line of output contains an index 
and the argument passed to the program.
Compile in a terminal: g++ -o Exercise3 Excercise3.cpp
Run in a terminal: ./Exercise3 first second third */

int main(int argc, char **argv)
{
    int i;
    for ( i = 0; i < argc; i++)
    {
        printf("%4d:... %s\n, i, argv[i]");
    }
    return 0;
}