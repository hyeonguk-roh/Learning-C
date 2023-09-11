#include <stdio.h>
#include <stdlib.h>

void SayHi() // this function has no return type
{
    printf("Hello User"); // this line is inside this function
}

void SayHiName(char name[]) // this function has parameters which takes a string
{
    printf("Hello %s", name);
}

int main() // this is a function
{
    SayHi();           // We must call a function in order for it to actually work
    SayHiName("Mike"); // takes a parameter
    return 0;
}
