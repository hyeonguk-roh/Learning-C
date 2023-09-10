#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age; // allocate a variable but dont give it a value
    printf("Enter your age: \n");
    scanf("%d", &age); // scanf(a, b) means get a variable type a and place the value into pointer b
    printf("You are %d years old\n", age);

    char name[20];
    printf("Enter a line of text: \n");
    fgets(name, 20, stdin); // fgets gets a string of text. stdin stands for "standard input"
    printf("Your name is %s\n", name);

    return 0;
}