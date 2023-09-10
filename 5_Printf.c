#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello \n");
    printf("World");

    // some special characters:
    printf("\"");
    printf("\\\n");

    // %d is a number format specifier
    printf("My favorite number is %d\n", 500);

    // %s is a string format specifier
    printf("My favorite %s is %d\n", "number", 500);

    // %f is a decimal format specifier
    printf("My favorite %s is %f\n", "number", 500.5353);

    // %lf is a double format specifier

    return 0;
}