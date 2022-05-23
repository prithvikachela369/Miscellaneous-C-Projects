#include <stdio.h>

int RecConv(int);
int main()
{
    int i;
    printf("Input the number\n");
    scanf("%d", &i);

    RecConv(i);
}
int RecConv(int i)
{
    int a;

    a = i % 2;
    i = i / 2;

    if (i == 0)
    {
        printf("%d\t", a);
        return a;
    }
    else
    {
        RecConv(i);
    }
    printf("%d\t", a);
}