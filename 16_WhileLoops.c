#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }

    do
    {
        printf("Don't care if index is > 5");
        index++;
    } while (index <= 5);

    return 0;
}