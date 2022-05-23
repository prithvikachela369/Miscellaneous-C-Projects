#include <stdio.h>
#include "problem87.h"

int main()
{
    float p, r, y, si, amount;
    printf("Input the principal\n");
    scanf("%f", &p);

    printf("Input the Rate of interest\n");
    scanf("%f", &r);

    printf("Input the Number of years\n");
    scanf("%f", &y);

    si = SI(p, r, y);

    printf("The simple interest is %f\n", si);

    amount = AMO(p, si);
    printf("The amount to be paid = %f\n", amount);
}