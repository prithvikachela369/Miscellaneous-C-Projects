#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, ls;

    printf("Input the length of side A\n");
    scanf("%f", &a);

    printf("Input the length of side B\n");
    scanf("%f", &b);

    printf("Input the length of side C\n");
    scanf("%f", &c);

    d = a + b;
    e = b + c;
    f = c + a;

    if (a > b && a > c)
    {
        ls = a;
        if (a < e)
        {
            printf("The triangle is valid\n");
        }
        else
        {
            printf("The triangle is Invalid\n");
        }
    }
    else if (b > c && b > a)
    {
        ls = b;
        if (b < f)
        {
            printf("The triangle is valid\n");
        }
        else
        {
            printf("The triangle is Invalid\n");
        }
    }
    else if (c > a && c > b)
    {
        ls = c;
        if (c < d)
        {
            printf("The triangle is valid\n");
        }
        else
        {
            printf("The triangle is Invalid\n");
        }
    }
    else if (a == b == c)
    {
        printf("The triangle is Valid\n");
    }

    return 0;
}