#include <stdio.h>
#include <math.h>

int main()
{
    float ang, sum;

    printf("Please input the angle in degrees\n");
    scanf("%f", &ang);

    ang = ang * 3.14 / 180;
    sum = sin(ang) * sin(ang) + cos(ang) * cos(ang);

    if (sum == 1)
    {
        printf("The sum of squares of sin and cos of angle is 1");
    }
    else
    {
        printf("The sum of squares of sin and cos of angle is not equal to 1");
    }
    return 0;
}