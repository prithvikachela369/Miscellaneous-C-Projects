#include <stdio.h>

int main()
{
    float r, g, b, cyan, magenta, yellow, black, max, white;

    printf("Enter the value of R (0 to 255)\n");
    scanf("%f", &r);

    printf("Enter the value of G (0 to 255)\n");
    scanf("%f", &g);

    printf("Enter the value of B (0 to 255)\n");
    scanf("%f", &b);

    if (r == 0 && g == 0 && b == 0)
    {
        cyan = magenta = yellow = 0;
        black = 1;
    }
    else
    {
        r = r / 225;
        g = g / 225;
        b = b / 255;

        max = r;
        if (g > max)
        {
            max = g;
        }
        if (b > max)
        {
            max = b;
        }

        white = max;

        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - max;
    }
    printf("C = %f\n", cyan);
    printf("M = %f\n", magenta);
    printf("Y = %f\n", yellow);
    printf("K = %f\n", black);

    return 0;
}
