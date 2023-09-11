#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    printf("%d", nums[1][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", nums[i][j]);
        }
    }

    return 0;
}