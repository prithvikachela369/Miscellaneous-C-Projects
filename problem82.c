#include <stdio.h>

int nat(int);
int main()
{
    int s;
    printf("The sum of first 25 natural numbers\n");
    s = nat(0);
    printf("%d\n", s);
}
int nat(int n)
{
    int sum = 0;

    if (n == 25)
    {
        return sum;
    }
    else
    {
        n = n + 1;
        sum = n + nat(n);
        return sum;
    }
}
