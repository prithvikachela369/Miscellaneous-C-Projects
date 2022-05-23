#include <stdio.h>
#include <math.h>

int main()
{
    float tri1[18] = {137.4, 80.9, 0.78, 155.2, 92.62, 0.89, 149.3, 97.93, 1.35, 160.0, 100.25, 9.00, 155.6, 68.95, 1.25, 149.7, 120.0, 1.75}, a, comp[6], *b, c;

    int i, j = 0;

    for (i = 0; i <= 17; i = i + 3)
    {
        a = 0.5 * tri1[i] * tri1[i + 1] * sin(tri1[i + 2]);
        printf("Area = %f\n", a);

        comp[j] = a;
        j++;
    }

    // for (i = 0; i <= 5; i++)
    // {
    //     printf("%f\n", comp[i]);
    // }

    b = &comp[0];
    c = comp[0];

    for (i = 0; i <= 5; i++)
    {
        if (c < (*b))
        {
            c = *b;
        }
        b++;
    }

    printf("The largest area is %f\n", c);

    return 0;
}