#include <stdio.h>

int main()
{
    int i, j;

    char c = '*';

    for (i = 10; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 10)
                printf("%c ", c);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}