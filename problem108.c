#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], matPro3[3][3], i, j;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Enter the element of the matrix 1\n");
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Enter the element of the matrix 2\n");
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            matPro3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The product of the matrices are:-\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", matPro3[i][j]);
        }
        printf("\n");
    }
    return 0;
}