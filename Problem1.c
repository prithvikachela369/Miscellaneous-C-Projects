#include <stdio.h>
int main()
{
    int sa;
    float da, ra, grs;

    printf("Enter the salary\n");
    scanf("%d", &sa);

    da = 0.4 * sa;
    ra = 0.2 * sa;

    grs = sa + da + ra;

    printf("The dearness allowance is %f\n", da);
    printf("The rent allowance is %f\n", ra);
    printf("The Gross salary is %f\n", grs);

    return 0;
}