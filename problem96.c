#include <stdio.h>
#include <math.h>

int main()
{
    int arr[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2}, i, s = 0;
    float m = 0.0, sd = 0.0, sdf;

    for (i = 0; i <= 14; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 0; i <= 14; i++)
    {
        m = m + arr[i];
    }

    m = m / 15;

    printf("\n");
    printf("Mean = %.1f\n", m);

    for (i = 0; i <= 14; i++)
    {
        s = s + pow((arr[i] - m), 2);
    }

    sd = s / 15;

    sdf = sqrt(sd);

    printf("Standard deviation = %f\n", sdf);

    return 0;
}
