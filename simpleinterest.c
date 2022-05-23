#include <stdio.h>
int main()
{
    int p, n;
    float r, s;

    printf("Please input the Principal amount\n");
    scanf("%d", &p);
    printf("Please input the Rate of interest\n");
    scanf("%f", &r);
    printf("Please input the Amount of years\n");
    scanf("%d", &n);

    /* formula for simple interest*/

    s = p * n * r / 100;

    printf("The simple interest is %f", s);
    return 0;
}