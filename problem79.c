#include <stdio.h>
#include <stdlib.h>

void recFib(int, int, int);

int main()
{
    int n1, n2;

    n1 = 1;
    n2 = 1;

    printf("%d\n", n1);
    printf("%d\n", n2);

    recFib(n1, n2, 23);
    return 0;
}

void recFib(int n1, int n2, int i)
{
    int n3;

    if (i >= 1)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        i = i - 1;
        recFib(n2, n3, i);
    }
}