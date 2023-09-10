#include <stdio.h>
#include <stdlib.h>

int main()
{

    char character_name[] = "Tom";
    int character_age = 1000;

    printf("There was once a man named %s.\n", character_name);
    printf("He was %d years old.\n", character_age);

    character_age = 10000;
    printf("He really liked the name %s.\n", character_name);
    printf("But did not like being %d.\n", character_age);

    return 0;
}