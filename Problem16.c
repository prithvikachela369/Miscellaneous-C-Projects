#include <stdio.h>

int main()
{
    int x, y;

    printf("Please input the value of x Co-ordinate\n");
    scanf("%d", &x);

    printf("Please input the value of y Co-ordinate\n");
    scanf("%d", &y);

    printf("The Co-ordinates are (%d, %d)\n", x, y);

    if (x == 0 && y != 0)
    {
        printf("The point lies on the y-Axis\n");
    }
    if (y == 0 && x != 0)
    {
        printf("The point lies on the x-Axis\n");
    }
    if (x == 0 && y == 0)
    {
        printf("The point lies on the origin\n");
    }
    else if (x != 0 && y != 0)
    {
        printf("The point lies on the cartesian plane\n");
    }
    return 0;
}