#include <stdio.h>
#include <math.h>

int main()
{
    int i, oct, rem, p;

    oct = rem = p = 0;

    printf("Input the number\n");
    scanf("%d", &i);

    while (i > 0)
    {
        rem = i % 8;
        i = i / 8;

        oct = oct + rem * pow(10, p);
        p++;
    }

    printf("The Octal equivalent is %d\n", oct);

    return 0;
}