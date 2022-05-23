#include <stdio.h>
#include <math.h>

int main()
{
    int x, i;
    float sum = 0;

    printf("Please input the Value of x\n");
    scanf("%d", &x);

    for (i = 1; i <= 7; i++)
    {
        if (i == 1)
        {
            sum = (x - 1) / x;
        }
        else
        {
            sum = sum + 0.5 * pow((x - 1.0) / x, i);
        }
    }

    printf("%f\n", sum);

    return 0;
}