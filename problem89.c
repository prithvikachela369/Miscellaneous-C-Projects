#include <stdio.h>
int main()
{
    int arrF[5], arrB[5], i, j;

    for (i = 0; i <= 4; i++)
    {
        printf("Input the content of the array\n");
        scanf("%d", &arrF[i]);
    }
    for (i = 0, j = 4; i <= 4; i++, j--)
    {
        arrB[j] = arrF[i];
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", arrB[i]);
    }
}