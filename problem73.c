#include <stdio.h>

void shift(int *, int *, int *);
int main()
{
    int x, y, z;

    x = 5; // LHS
    y = 8;
    z = 10; // RHS

    shift(&x, &y, &z);

    printf("%d %d %d", *(&y), *(&z), *(&x));
    return 0;
}
void shift(int *x, int *y, int *z)
{
    int k, l;

    k = *x;
    l = *y;
    *x = *z;
    *y = k;
    *z = l;
}