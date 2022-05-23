#include <stdio.h>

int main()
{
    int i, num, a;

    a = 2;

    printf("Prime numbers between 1 and 300\n");

    for (i = 1; i <= 300; i++)
    {
        for (a = 2; a <= i; a++)
            if (i % a == 0)
            {
                break;
            }
        if (a == i)
        {
            printf("%d\n", a); // for reference
            printf("%d\n", i);
        }
    }
}