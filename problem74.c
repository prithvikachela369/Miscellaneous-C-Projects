#include <stdio.h>
#include <math.h>

float area(float a, float b, float c);
int main()
{
    float a, b, c, z;

    printf("Enter the first side of the traingle\n");
    scanf("%f", &a);

    printf("Enter the second side of the traingle\n");
    scanf("%f", &b);

    printf("Enter the third side of the traingle\n");
    scanf("%f", &c);

    z = area(a, b, c);

    printf("Area of the triangle = %.3f\n", z);

    return 0;
}

float area(float a, float b, float c)
{
    float v, s, x;

    s = (a + b + c) / 2;

    v = s * (s - a) * (s - b) * (s - c);

    x = sqrt(v);

    return (x);
}