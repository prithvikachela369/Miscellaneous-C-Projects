#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Please input the Co-ordinate x1\n");
    scanf("%d", &x1);

    printf("Please input the Co-ordinate x2\n");
    scanf("%d", &x2);

    printf("Please input the Co-ordinate x3\n");
    scanf("%d", &x3);

    printf("Please input the Co-ordinate y1\n");
    scanf("%d", &y1);

    printf("Please input the Co-ordinate y2\n");
    scanf("%d", &y2);

    printf("Please input the Co-ordinate y3\n");
    scanf("%d", &y3);

    printf("The Co-ordinates are (%d, %d)\n", x1, y1);
    printf("The Co-ordinates are (%d, %d)\n", x2, y2);
    printf("The Co-ordinates are (%d, %d)\n", x3, y3);

    if (x1 == x2 || y1 == y2)
    {
        if (x2 == x3 || y2 == y3)
        {
            printf("The line is straight");
        }
        else
        {
            printf("The line is not straight");
        }
    }
    else
    {
        printf("The line is not straight");
    }

    return 0;
}