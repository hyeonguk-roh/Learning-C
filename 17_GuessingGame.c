#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 25;
    int userGuess;
    int guessLimit = 5;

    while (userGuess != secretNumber && guessLimit > 0)
    {
        printf("Guess a number: \n");
        scanf("%d", &userGuess);
        if (userGuess < secretNumber)
        {
            printf("Higher\n");
        }
        else if (userGuess > secretNumber)
        {
            printf("Lower\n");
        }
        guessLimit--;
        printf("You have %d guesses remaining\n", guessLimit);
    }
    if (userGuess == secretNumber)
    {
        printf("You got the number!\n");
    }
    else
    {
        printf("You didn't get it try again :(\n");
    }

    return 0;
}