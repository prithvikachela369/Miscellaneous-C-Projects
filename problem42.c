#include <stdio.h>

int main()
{
    int num, i;

    printf("Input the number\n");
    scanf("%d", &num);

    i = 2;

    while (i <= num - 1) // num - 1 is necessary to check the exception of 2 as a prime number
                         // 2 - 1 = 1, so it will jump to the last if() block and will be printed
                         // as a prime number.
    {
        if (num % i == 0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
    }

    if (i == num) // for 2 as a prime number
    {
        printf("A prime number\n");
    }

    return 0;
}