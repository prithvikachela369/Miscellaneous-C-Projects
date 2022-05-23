#include <stdio.h>

int main()
{
    float sp, cp, pr, ls;
    printf("Please input the Cost price of the product\n");
    scanf("%f", &cp);

    printf("Please input the Selling price of the product\n");
    scanf("%f", &sp);

    if ((sp - cp) > 0)
    {
        pr = sp - cp;
        printf("You are in Profit :)\n");
        printf("The profit is %f", pr);
    }
    else
    {
        ls = cp - sp;
        printf("You are in loss :(\n");
        printf("The loss is %f", ls);
    }
    return 0;
}