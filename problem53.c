#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i <= 23; i++)
    {
        if (i == 0)
        {
            printf("%d Midnight\n", i + 1 * 12);
        }
        else
        {
            if (i > 0 && i < 12)
            {
                printf("%d AM\n", i);
            }
            else if (i == 12)
            {
                printf("%d Noon\n", i);
            }
            else
            {
                printf("%d PM\n", i);
            }
        }
    }
    return 0;
}