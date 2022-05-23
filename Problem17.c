#include <stdio.h>

int main()
{
    int yr, leapdays, firstDay;
    long int normaldays, total;

    printf("Please input the year\n");
    scanf("%d", &yr);

    normaldays = (yr - 1) * 365L;
    leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;

    total = normaldays + leapdays;

    firstDay = total % 7;

    if (firstDay == 0)
    {
        printf("Monday\n");
    }
    if (firstDay == 1)
    {
        printf("Tuesday\n");
    }
    if (firstDay == 2)
    {
        printf("Wednesday\n");
    }
    if (firstDay == 3)
    {
        printf("Thursday\n");
    }
    if (firstDay == 4)
    {
        printf("Friday\n");
    }
    if (firstDay == 5)
    {
        printf("Saturday\n");
    }
    if (firstDay == 6)
    {
        printf("Sunday\n");
    }
    return 0;
}