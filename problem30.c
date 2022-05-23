#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Please input the number A\n");
    scanf("%d", &a);

    printf("Please input the number B\n");
    scanf("%d", &b);

    printf("Please input the number C\n");
    scanf("%d", &c);

    a > b &&a > c ? printf("%d is the highest\n", a) : printf("");
    b > a &&b > c ? printf("%d is the highest\n", b) : printf("");
    c > a &&c > b ? printf("%d is the highest\n", c) : printf("");
    a == b == c ? printf("All values are equal\n") : printf("");

    return 0;
}