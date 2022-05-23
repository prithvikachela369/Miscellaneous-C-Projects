#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    while (i <= 255)
    {
        printf(" %d - % c\n", j, i);
        j++;
        i++;
    }

    return 0;
}