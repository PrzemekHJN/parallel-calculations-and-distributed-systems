#include <stdio.h>
#include <unistd.h>


/* program in the process uses the execl function to replace it's currently 
executing program with another program named "Exercise3."
It passes three arguments to the new program: "first", "second" and "third".
Once the "Exercise3" program is run in the child process, the main (parent) program closes and executes no further.
Compile in a terminal: g++ -o Exercise4 Excercise4.cpp
Run in a terminal: ./Exercise4 */

int main(void)
{
    char const *arg1 = "first", *arg2 = "second", *arg3 = "third";
    printf("- calling (suicidal) descendant -------\n");
    execl("./Exercise3", arg1, arg2, arg3, '\0');
    return 0;
}