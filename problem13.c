#include <stdio.h>

int main()
{
    float l, b, per, ar;

    printf("Please input the length\n");
    scanf("%f", &l);

    printf("Please input the breadth\n");
    scanf("%f", &b);

    per = 2 * (l + b);
    ar = l * b;

    if (ar > per)
    {
        printf("The area is greater than the perimeter");
    }
    else
    {
        printf("The area is not greater than the perimeter");
    }
    return 0;
}