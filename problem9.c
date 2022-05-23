#include <stdio.h>

int main()
{
    int da, hra, gs, sa;
    printf("Please input the salary\n");
    scanf("%d", &sa);

    if (sa < 1500)
    {
        hra = sa * 10 / 100;
        da = sa * 90 / 100;
        gs = hra + da + sa;
        printf("The gross salary is %d\n", gs);
    }
    else if (sa >= 1500)
    {
        hra = 500;
        da = sa * 98 / 100;
        gs = hra + da + sa;
        printf("The gross salary is %d\n", gs);
    }
    return 0;
}