#include <stdio.h>

int main()
{
    int num, i, count;

    printf("Input the number\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        count = num * i;
        printf("%d x %d = %d\n", num, i, count);
    }
    return 0;
}