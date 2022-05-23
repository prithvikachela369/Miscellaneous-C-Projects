#include <stdio.h>

int main()
{
    int qty;
    float tot, price, dis;

    printf("Please input the Quantity of the product\n");
    scanf("%d", &qty);

    printf("Please input the price per item\n");
    scanf("%f", &price);

    if (qty > 1000)
    {
        dis = (price * qty) * 10 / 100;
        printf("The discount is %f\n", dis);

        tot = (price * qty) - dis;
        printf("The total expenses are %f\n", tot);
    }
    else
    {
        printf("The discount is 0 Rs\n");
        tot = price * qty;
        printf("The tottal expenses are %f\n", tot);
    }

    return 0;
}