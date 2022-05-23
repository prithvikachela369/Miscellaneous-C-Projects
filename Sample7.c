#include <stdio.h>
int main()
{
    int a[4][4], b[4][4], i, j, x;

    // Taking Input Parameters
    printf("Input a 4 x 4 matrix\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
    }

    // Printing the matrix
    printf("Entered Matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }

    // Computing the matrix
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    // Printing the Transposed matrix
    printf("Entered Matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", b[i][j]);
            if (j == 3)
            {
                printf("\n");
            }
        }
    }
    return 0;
}