#include <stdio.h>
#include <math.h>

void calc(float, float *);
double factorial(int);
int main()
{
    int x;
    float radian, result = 0;

    printf("Enter the value of x\n");
    scanf("%d", &x);

    // conversion of degrees to radians

    radian = x * (3.14159 / 180);

    calc(radian, &result);

    printf("Sin(%d) = %f\n", x, result);
    return 0;
}

void calc(float radian, float *result)
{
    int count, n = 1, sign = 1; // sign variable is used to alternate the use of sub and add.
                                // ex : + - + - + - + -...so on.

    for (count = 1; n <= 10; count = count + 2)
    {
        *result = *result + sign * (pow(radian, count) / (double)factorial(count)); // converting explicitly
        n++;
        sign = sign * -1;
    }
}

double factorial(int count)
{
    int i;
    double k = 1;
    for (i = 1; i <= count; i++)
    {
        k = k * i;
    }

    return k;
}