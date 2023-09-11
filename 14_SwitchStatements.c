#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter a grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Amazing score!");
        break;
    case 'B':
        printf("Nice job! Could do better though.");
        break;
    case 'C':
        printf("Uhh passing but could do much better.");
        break;
    case 'D':
        printf("Ok seriously not for this class man");
        break;
    case 'F':
        printf("You didn't even try");
        break;
    default:
        printf("Not a grade bro");
    }

    return 0;
}