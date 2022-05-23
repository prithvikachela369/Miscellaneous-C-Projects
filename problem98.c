#include <stdio.h>
#include <math.h>
int main()
{
    float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float r, x1 = 0.0, y1 = 0.0, xy = 0.0, x2 = 0.0, y2 = 0.0;
    int i;

    for (i = 0; i <= 10; i++)
    {
        x1 = x1 + x[i]; // sum of all elements of array x
        y1 = y1 + y[i]; // sum of all elements of array y

        xy = xy + (x[i] * y[i]); // product of all x and y values summed

        x2 = x2 + (x[i] * x[i]); // sum of squares of all x values

        y2 = y2 + (y[i] * y[i]); // sum of squares of all y values
    }

    r = ((xy) - (x1 * y1)) / sqrt(((11 * x2) - (x2)) * ((11 * y2) - (y2)));

    printf("Correlation of coefficient = %f\n", r);

    return 0;
}