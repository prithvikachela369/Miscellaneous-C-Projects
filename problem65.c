#include <stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("Input the number\n");
    scanf("%d", &num);

    factorial = fact(num);

    printf("Factorial = %d\n", factorial);
    return 0;
}
int fact(int num)
{
    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}