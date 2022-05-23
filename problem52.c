#include <stdio.h>

int main()
{
    int a, b, c, d, limit, sum;

    printf("Enter the limit\n");
    scanf("%d", &limit);

    for (a = 1; a < limit; a++)
    {
        for (b = 1; b < limit; b++)
        {
            for (c = 1; c < limit; c++)
            {
                for (d = 1; d < limit; d++)
                {
                    if ((a != b && a != c && a != d) &&
                        (b != a && b != c && b != d) &&
                        (c != a && c != b && c != d) &&
                        (d != a && d != b && d != c))
                    {
                        if (a * a * a + b * b * b == c * c * c + d * d * d)
                        {
                            printf("%d^3 + %d^3 = %d^3 + %d^3\n", a, b, c, d);
                            sum = (a * a * a) + (b * b * b);
                            printf("Sum = %d\n", sum);
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}