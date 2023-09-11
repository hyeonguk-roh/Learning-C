#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op); // whenever scanning for a character, place a space before %
    printf("Enter another number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("The result is: %f %c %f = %f", num1, op, num2, num1 + num2);
    }
    else if (op == '-')
    {
        printf("The result is: %f %c %f = %f", num1, op, num2, num1 - num2);
    }
    else if (op == '*')
    {
        printf("The result is: %f %c %f = %f", num1, op, num2, num1 * num2);
    }
    else if (op == '/')
    {
        printf("The result is: %f %c %f = %f", num1, op, num2, num1 / num2);
    }
    else
    {
        printf("Not an operator");
    }

    return 0;
}