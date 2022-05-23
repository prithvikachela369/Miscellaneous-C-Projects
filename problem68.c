#include <stdio.h>

int leap(int);
int main()
{
    int yr;

    printf("Input the year\n");
    scanf("%d", &yr);

    leap(yr);
    return 0;
}
int leap(int yr)
{
    if (yr % 4 == 0)
    {
        if (yr % 100 == 0)
        {
            if (yr % 400 == 0)
            {
                printf("A leap year\n");
            }
            else
            {
                printf("A non leap year\n");
            }
        }
        else
        {
            printf("A leap year\n");
        }
    }
    else
    {
        printf("A non leap year\n");
    }
}