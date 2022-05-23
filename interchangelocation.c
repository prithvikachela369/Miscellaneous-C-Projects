#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Input the first number\n");
    scanf("%d", &a);

    printf("Input the second number\n");
    scanf("%d", &b);

    printf("First number - %d\n", a);
    printf("Second number - %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("The first interchanged number is %d\n", a);

    printf("The second interchanged number is %d\n", b);
    return 0;
}