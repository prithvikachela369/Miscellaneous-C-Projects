#include <stdio.h>
int main()
{
    int num[25], neg = 0, pos = 0, zero = 0, i;

    for (i = 0; i <= 24; i++)
    {
        printf("Input the number:\n");
        scanf("%d", &num[i]);

        if (num[i] == 0)
        {
            zero++;
        }
        if (num[i] > 0)
        {
            pos++;
        }
        if (num[i] < 0)
        {
            neg++;
        }
    }
    printf("Number of zeroes = %d\n", zero);
    printf("Number of positive numbers = %d\n", pos);
    printf("Number of negative numbers = %d\n", neg);
    return 0;
}