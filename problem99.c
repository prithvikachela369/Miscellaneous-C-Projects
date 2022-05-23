#include <stdio.h>

int main()
{
    float x[10] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};   // Independent variables (X)
    float y[10] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0}; // Dependent variables (Y)
    float xy = 0.0, x1 = 0.0, y1 = 0, x2 = 0.0, a, b;
    int i;

    for (i = 0; i <= 9; i++)
    {
        x1 = x1 + x[i];
        y1 = y1 + y[i];

        xy = xy + (x[i] * y[i]);

        x2 = x2 + (x[i] * x[i]);
    }

    b = ((10 * xy) - (x1 * y1)) / ((10 * x2) - (x1 * x1));
    a = (y1 / 10) - (b * (x1 / 10));

    printf("Intercepts value = %f\n", a);
    printf("Slope of linear regression = %f\n", b);

    return 0;
}