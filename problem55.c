#include <stdio.h>

int main()
{
    // for verted triangular pattern

    // int i, j;

    // char c = '*';

    // for (i = 1; i <= 10; i++)
    // {

    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%-5c", c); // put j instead of c to print number pyramind
    //     }
    //     printf("\n");
    // }
    // return 0;

    int i, j;

    char c = '*';

    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            printf("%-5c", c);
        }
        printf("\n");
    }
}