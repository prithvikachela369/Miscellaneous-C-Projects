#include <stdio.h>

int main()
{
    int mat1[6][6], mat2[6][6], matSum3[6][6], i, j;

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("Enter the element of the matrix 1\n");
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("Enter the element of the matrix 2\n");
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            matSum3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The sum of the matrices are:-\n");

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("%d\t", matSum3[i][j]);
        }
        printf("\n");
    }
    return 0;
}