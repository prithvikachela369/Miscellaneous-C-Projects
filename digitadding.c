#include <stdio.h>
int main()
{
    int n5, n4, n3, n2, n1, num, total;
    printf("Please input a five-digit number(less than 32767)\n");
    scanf("%d", &num);

    n5 = num % 10;
    num = num / 10;

    n4 = num % 10;
    num = num / 10;

    n3 = num % 10;
    num = num / 10;

    n2 = num % 10;
    num = num / 10;

    n1 = num % 10;
    num = num / 10;

    total = n1 + n2 + n3 + n4 + n5;

    printf("The total of all the digits of the number is %d", total);
    return 0;
}