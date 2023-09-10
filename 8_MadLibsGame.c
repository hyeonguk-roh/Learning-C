#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pluralNoun[20];
    char pluralNoun2[20];
    char singularNoun[20];
    char adjective[20];
    char verb[20];

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter another plural noun: ");
    scanf("%s", pluralNoun2);
    printf("Enter a singular noun: ");
    scanf("%s", singularNoun);
    printf("Enter an adjective: ");
    scanf("%s", adjective);
    printf("Enter a verb: ");
    scanf("%s", verb);

    printf("%s are red\n", pluralNoun);
    printf("%s are blue\n", pluralNoun2);
    printf("%s is %s\n", singularNoun, adjective);
    printf("and I %s %s\n", verb, singularNoun);

    return 0;
}