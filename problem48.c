#include <stdio.h>
#include <math.h>

int main()
{
    float a, p, r, n, q;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Please input the Principal amount\n");
        scanf("%f", &p);

        printf("Please input the Rate of interest(Annual)\n");
        scanf("%f", &r);

        printf("Please input number of times interest is compounded in a year\n");
        scanf("%f", &q);

        printf("Please input number of years\n");
        scanf("%f", &n);

        a = p + pow((1 + r / q), n * q);

        printf("Compound interest = %f\n", a);
    }
    return 0;
}