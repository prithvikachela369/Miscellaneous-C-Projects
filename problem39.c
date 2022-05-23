#include <stdio.h>

int main()
{
    int pos, neg, zero, num;
    char ans = 'y';

    pos = neg = zero = 0;

    while (ans == 'y')
    {
        printf("Input the numbers\n");
        scanf("%d", &num);

        if (num == 0)
        {
            zero++;
        }
        if (num > 0)
        {
            pos++;
        }
        if (num < 0)
        {
            neg++;
        }

        fflush(stdin); // clears standard input stream

        printf("Do you want to continue?(y/n)\n");
        scanf(" %c", &ans);
    }

    printf("You entered %d positive numbers\n", pos);
    printf("You entered %d negative numbers\n", neg);
    printf("You entered %d Zeroes\n", zero);

    return 0;
}