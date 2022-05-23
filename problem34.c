#include <stdio.h>

int main()
{
    int n, fac;
    printf("Input the number\n");
    scanf("%d", &n);

    if (n == 1)
    {
        fac = 0;
        printf("1! = %d\n", fac);
    }
    else
    {
        fac = n * (n - 1);
        printf("%d! = %d", n, fac);
    }
}