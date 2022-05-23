#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Please input the length of the sides of the triangle\n");

    printf("Side 1\n");
    scanf("%f", &a);

    printf("Side 2\n");
    scanf("%f", &b);

    printf("Side 3\n");
    scanf("%f", &c);

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The Area of the triangle is %f\n", area);

    return 0;
}