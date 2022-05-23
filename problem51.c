#include <stdio.h>

int main()
{
    int pop = 0, rate = 10, i;

    for (i = 1; i <= 10; i++)
    {
        pop = pop + (100000 * rate) / 100;
        printf("%d\n", pop);
    }
    return 0;
}