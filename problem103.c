#include <stdio.h>

int main()
{
    int arr1[4][4], arr2[4][4];
    int i, j;

    printf("Enter elements of the 4 x 4 matrix:\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            scanf("%d", &arr1[i][j]); // scanning matrix
        }
    }
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            arr2[i][j] = arr1[j][i]; // Finding transpose of the matrix
        }
    }

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("%d\t", arr1[i][j]); // Printing the original matrix
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("%d\t", arr2[i][j]); // printing the transpose matrix
        }
        printf("\n");
    }
    return 0;
}