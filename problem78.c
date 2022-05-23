#include <stdio.h>
#include <stdlib.h>

void recPrime(int, int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("The prime numbers are: \n");
    recPrime(num, 2);

    return 0;
}

void recPrime(int num, int i)
{
    if (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d\t", i);
            num = num / i;
            recPrime(num, i);
        }
        else
        {
            i++;
            recPrime(num, i);
        }
    }
    else
    {
        exit(0);
    }
}