#include <stdio.h>
int main()
{
    char cdc[15];
    int i, j, sumj, sumi, sumij;
    printf("Input the credit card number:\n");
    scanf("%s", cdc);

    for (i = 0; i <= 15; i++)
    {
        cdc[i] -= 48;
    }

    for (j = 0; j <= 15; j = j + 2)
    {
        cdc[j] *= 2;
    }

    // for (j = 0; j <= 15; j = j + 2)
    // {
    //     printf("%d\t", cdc[j]); // for checking purposes
    // }

    for (j = 0; j <= 15; j = j + 2)
    {
        if (cdc[j] >= 10)
        {
            cdc[j] -= 9;
        }
    }

    for (j = 0; j <= 15; j = j + 2)
    {
        sumj = sumj + cdc[j];
    }

    for (i = 1; i <= 15; i = i + 2)
    {
        sumi = sumi + cdc[i];
    }

    sumij = sumi + sumj;

    if (sumij % 10 == 0)
    {
        printf("The Credit card is Valid\n");
    }
    else
    {
        printf("The Credit card is Invalid\n");
    }

    // for (j = 0; j <= 15; j = j + 2)
    // {
    //     printf("%d\t", cdc[j]); // for checking purposes
    // }

    return 0;
}