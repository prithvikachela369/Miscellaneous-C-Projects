#include <stdio.h>
int main()
{
    int yr;

    printf("Please input the year\n");
    scanf("%d", &yr);

    yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0 ? printf("A leap year\n") : printf("A non-leap year\n");
    return 0;
}