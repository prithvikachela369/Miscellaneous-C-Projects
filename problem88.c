#include <stdio.h>
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int i, j;

    for (i = 0; i <= 9; i = i + 2)
    {
        j = num[i];
        num[i] = num[i + 1];
        num[i + 1] = j;
    }
    for (j = 0; j <= 9; j++)
    {
        printf("%d\n", num[j]);
    }
    return 0;
}