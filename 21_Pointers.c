#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 22;
    int *p_age = &age;

    printf("age's memory address is: %p\n", p_age);
    printf("age's memory address is: %p\n", &age);
    return 0;
}