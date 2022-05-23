#include <stdio.h>
int main()
{
    int AOL = 1189;
    int AOB = 841;

    printf("AO = %d x %d\n", AOL, AOB);

    int a;
    for (int i = 0; i < 8; i++)
    {
        a = AOL;
        AOL = AOB;
        AOB = a / 2;

        printf("Sizes are %d x %d\n", AOL, AOB);
    }
    return 0;
}