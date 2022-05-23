#include <stdio.h>

int modify(int *, int);

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");

    modify(&num, 10);

    for (i = 0; i <= 9; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}
int modify(int *arr, int num)
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        *arr = *arr * 3;
        arr++;
    }
}