#include <stdio.h>
int main()
{
    int num, revNum, d5, d4, d3, d2, d1, n;
    printf("Enter a five-digit number(less than 32767)\n");
    scanf("%d", &num);

    n = num;

    d5 = num % 10;
    num = num / 10;

    d4 = num % 10;
    num = num / 10;

    d3 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10;

    d1 = num % 10;
    num = num / 10;

    revNum = (10000 * d5) + (1000 * d4) + (100 * d3) + (10 * d4) + (1 * d1);

    printf("The Reverse number is %d\n", revNum);

    if (revNum == n)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both are Unequal");
    }
    return 0;
}