#include <stdio.h>
#include <math.h>

int square2(int, int);
int main()
{
    int a, b, square;

    printf("Enter value of a\n");
    scanf("%d", &a);

    printf("Enter value of b\n");
    scanf("%d", &b);

    square = square2(a, b);

    printf("Square = %d\n", square);

    return 0;
}
int square2(int a, int b)
{
    int sq;

    sq = pow(a, b);

    return sq;
}