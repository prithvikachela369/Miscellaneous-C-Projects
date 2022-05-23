#include <stdio.h>

int main()
{
    int i, j;

    char c, d, v;

    for (i = 0; i <= 6; i++)
    {
        for (c = 'A'; c <= 71 - i; c++)
        {

            printf("%-5c", c);

            if (c == 'G')
                for (d = 'F'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }

            if (c == 'F' && i != 0)
            {
                printf("%-5c", v);
                for (d = 'F'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }

            if (c == 'E' && i != 0 && i != 1)
            {
                printf("%-15c", v);
                for (d = 'E'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }
            if (c == 'D' && i != 0 && i != 1 && i != 2)
            {
                printf("%-25c", v);
                for (d = 'D'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }
            if (c == 'C' && i != 0 && i != 1 && i != 2 && i != 3)
            {
                printf("%-35c", v);
                for (d = 'C'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }
            if (c == 'B' && i != 0 && i != 1 && i != 2 && i != 3 && i != 4)
            {
                printf("%-45c", v);
                for (d = 'B'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }
            if (c == 'A' && i != 0 && i != 1 && i != 2 && i != 3 && i != 4 && i != 5)
            {
                printf("%-55c", v);
                for (d = 'A'; d >= 65; d--)
                {
                    printf("%-5c", d);
                }
            }
        }
        printf("\n");
    }
    return 0;
}