#include <stdio.h>
#include <math.h>

int main()
{
    float x[10], y[10], dis = 0.0;
    int i;

    for (i = 0; i <= 9; i++)
    {
        printf("Input the X and Y Coordinates\n");
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        dis = dis + sqrt((pow(x[i + 1] - x[i], 2)) + (pow(y[i + 1] - y[i], 2)));
    }

    printf("The distance between the first point and last point is %f\n", dis);

    return 0;
}