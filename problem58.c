#include <stdio.h>

int main()
{
    int i, j, k;
    char c = '*';

    for (i = 1; i <= 8; i++)
    {
        for (k = 0; k <= 8 - i; k++)
        {
            printf("   ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf(" %c ", c);
        }
        printf("\n");
    }

    return 0;
}