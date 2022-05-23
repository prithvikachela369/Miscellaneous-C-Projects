#include <stdio.h>

int main()
{
    char gen;
    char qua;
    int yos;

    printf("Please input your gender(M or F)\n");
    scanf(" %c", &gen);

    printf("Please input your Qualifications(P or G)\n");
    scanf(" %c", &qua);

    printf("Please input your Years of service\n");
    scanf("%d", &yos);

    if (gen == 'M' && qua == 'P')
    {
        if (yos >= 10)
        {
            printf("Your salary is Rs 15000\n");
        }
        else if (yos < 10)
        {
            printf("Your salary is Rs 10000\n");
        }
    }
    else if (gen == 'M' && qua == 'G')
    {
        if (yos >= 10)
        {
            printf("Your salary is Rs 10000\n");
        }
        else if (yos < 10)
        {
            printf("Your salary is Rs 7000\n");
        }
    }
    else if (gen == 'F' && qua == 'P')
    {
        if (yos >= 10)
        {
            printf("Your salary is Rs 12000\n");
        }
        else if (yos < 10)
        {
            printf("Your salary is Rs 10000\n");
        }
    }
    else if (gen == 'F' && qua == 'G')
    {
        if (yos >= 10)
        {
            printf("Your salary is Rs 9000\n");
        }
        else if (yos < 10)
        {
            printf("Your salary is Rs 6000\n");
        }
    }
    return 0;
}