#include <stdio.h>

int recAdd(int);
int main()
{
    int x, sum;

    printf("Input the 5 digit number\n");
    scanf("%d", &x);

    sum = recAdd(x);

    printf("The sum = %d\n", sum);
    return 0;
}

int recAdd(int x)
{
    int a, b;

    if (x != 0)
    {
        b = x % 10;
        a = b + recAdd(x / 10);
    }
}