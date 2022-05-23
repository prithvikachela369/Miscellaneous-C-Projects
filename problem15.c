#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r, co, r2;

    printf("Please input the x Co-ordinate\n");
    scanf("%d", &x);

    printf("Please input the y Co-ordinate\n");
    scanf("%d", &y);

    printf("Please input the Radius\n");
    scanf("%d", &r);

    r2 = r * r;
    co = (x * x) + (y * y);

    if (r2 == co)
    {
        printf("The points lie in the circle");
    }
    else
    {
        printf("The points lie outside the circle");
    }
    return 0;
}