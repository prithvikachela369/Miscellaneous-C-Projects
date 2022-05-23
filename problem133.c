#include <stdio.h>
#include <stdlib.h>
struct date
{
    int yyyy;
    int mm;
    int dd;
};
struct date d[2];
int main()
{
    printf("Enter the first date (yyyy/mm/dd)\n");
    scanf("%d/%d/%d", &d[0].yyyy, &d[0].mm, &d[0].dd);
    if (d[0].mm > 12 || d[0].dd > 31)
    {
        printf("Enter a Valid date\n");
        exit(0);
    }
    printf("Enter the second date (yyyy/mm/dd)\n");
    scanf("%d/%d/%d", &d[1].yyyy, &d[1].mm, &d[1].dd);
    if (d[0].mm > 12 || d[0].dd > 31)
    {
        printf("Enter a Valid date\n");
    }
    if ((d[0].yyyy == d[1].yyyy) && (d[0].mm == d[1].mm) && (d[0].dd == d[1].dd))
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}