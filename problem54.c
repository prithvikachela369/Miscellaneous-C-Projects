#include <stdio.h>

int main()
{
    int i, j, k, l;

    for (i = 1, k = 1; i < 5; i++)
    {
        for (l = 1; l <= 4 - i; l++)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++, k++)
        {
            printf("  %d  ", k);
        }
        printf("\n");
    }
    return 0;
}