#include <stdio.h>
int main()
{
    int mat[3][3], i, j, count = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("Enter the element of the matrix\n");
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = i; j <= 2; j++)
        {
            if (mat[i][j] == mat[j][i])
            {
                count++;
            }
        }
    }

    if (count == 6)
    {
        printf("The matrix is Symmetric\n");
    }
    else
    {
        printf("The matrix is not Symmetric\n");
    }
    return 0;
}