#include <stdio.h>

int main()
{
    int i, j;

    char c;

    for (i = 65; i <= 90; i++)
    {
        for (c = 'A'; c <= i; c++)
        {
            printf("%-5c", c);
        }
        printf("\n");
    }
    return 0;
}