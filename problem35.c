#include <stdio.h>

int main()
{
    int a, b, power, i;

    printf("Input the First number\n");
    scanf("%d", &a);

    printf("Input the Second number\n");
    scanf("%d", &b);

    power = i = 1;

    while (i <= b)
    {
        power = power * a;
        i++;
    }

    printf("The powered value is %d\n", power);

    return 0;
}