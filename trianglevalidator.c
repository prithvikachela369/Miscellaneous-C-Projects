#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter the value of angle A\n");
    scanf("%d", &a);

    printf("Enter the value of angle B\n");
    scanf("%d", &b);

    printf("Enter the value of angle C\n");
    scanf("%d", &c);

    sum = a + b + c;

    if (sum == 180)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}