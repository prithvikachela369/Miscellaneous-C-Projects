#include <stdio.h>
#include <math.h>

int main()
{
    float t, v, wcf;
    printf("Please input the temprature(In Fahrenheit)\n");
    scanf("%f", &t);
    printf("Please input the wind velocity(In mph)\n");
    scanf("%f", &v);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16f);

    printf("The Wind chill factor is %f", wcf);

    return 0;
}