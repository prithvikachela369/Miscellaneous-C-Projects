#include <stdio.h>

int main()
{
    int num, d1, d2, d3, i = 1, dcu1, dcu2, dcu3, dcuSum, exVa;

    while (i <= 500)
    {
        num = i;
        exVa = num;

        d3 = num % 10;
        num = num / 10;

        d2 = num % 10;
        num = num / 10;

        d1 = num;

        dcu1 = d1 * d1 * d1;
        dcu2 = d2 * d2 * d2;
        dcu3 = d3 * d3 * d3;

        dcuSum = dcu1 + dcu2 + dcu3;

        if (dcuSum == exVa)
        {
            printf("%d\n", dcuSum);
        }

        i++;
    }
    return 0;
}