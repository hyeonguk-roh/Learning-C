#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 22;
    int *p_age = &age;

    printf("%p\n", p_age);
    printf("%d\n", *p_age);

    return 0;
}