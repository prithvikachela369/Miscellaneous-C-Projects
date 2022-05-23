#include <stdio.h>

int main()
{
    int i, j, k;

    int l, m, n;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10 - i; j++)
        {
            printf("   ");
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (l = 9; l >= 1; l--)
    {
        for (m = 9 - l; m >= 0; m--)
        {
            printf("   ");
        }
        for (n = l * 2 - 1; n >= 1; n--)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}