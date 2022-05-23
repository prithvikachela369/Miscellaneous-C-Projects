#include <stdio.h>

int main()
{
    int i = 1, count;

    float sum = 0.0, fact;

    for (i = 1; i <= 7; i++)
    {
        fact = 1;

        for (count = 1; count <= i; count++)
        {
            fact = fact * count;
        }

        sum = sum + i / fact;
        printf("%f\n", sum);
    }
    printf("%f\n", sum);

    return 0;
}