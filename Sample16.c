#include <stdio.h>
int main()
{
    char swap[][20] = {"Hii", "Spock"};
    char t;
    int i;
    printf("Original Strings = %s\t%s\n", &swap[0][0], &swap[1][0]);
    for (i = 0; i < 20; i++)
    {
        t = swap[0][i];
        swap[0][i] = swap[1][i];
        swap[1][i] = t;
    }
    printf("New Strings = %s\t%s\n", &swap[0][0], &swap[1][0]);
    return 0;
}