#include <stdio.h>

int main()
{
    int num[5] = {33, 11, 44, 22, 55}, i, j, k;

    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");

    for (k = 0; k <= 4; k++)
    {
        for (i = 0; i <= 4; i++)
        {
            if (num[i] > num[i + 1])
            {
                j = num[i + 1];
                num[i + 1] = num[i];
                num[i] = j;

                for (i = 0; i <= 4; i++)
                {
                    printf("%d\t", num[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}