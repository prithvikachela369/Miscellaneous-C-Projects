#include <stdio.h>
int main()
{
    int amount, hun, fif, ten, fiv, two, one, total;
    printf("Please input the amount\n");
    scanf("%d", &amount);

    hun = amount / 100;
    amount = amount % 100;

    fif = amount / 50;
    amount = amount % 50;

    ten = amount / 10;
    amount = amount % 10;

    fiv = amount / 5;
    amount = amount % 5;

    two = amount / 2;
    amount = amount % 2;

    one = amount / 1;
    amount = amount % 1;

    total = hun + fif + ten + fiv + two + one;
    printf("The total notes are %d", total);
    return 0;
}