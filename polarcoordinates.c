#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    double r, z;
    printf("Input the values of x and y Co-ordinates.\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("The x and y Co-ordinates are (%d, %d)\n", x, y);

    r = sqrt((x * x) + (y * y));
    z = atan(y / x);

    printf("The polar Co-ordinates are (%lf, %lf)", r, z);

    return 0;
}