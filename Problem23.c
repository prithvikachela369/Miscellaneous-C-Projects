#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input the Side A\n", a);
    scanf("%d", &a);

    printf("Input the Side B\n", b);
    scanf("%d", &b);

    printf("Input the Side C\n", c);
    scanf("%d", &c);

    if (a == b == c)
    {
        printf("An Equilateral triangle\n");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("An Isosceles triangle\n");
    }
    else if (a != b != c)
    {
        printf("A Scalene triangle\n");
    }
    return 0;
}