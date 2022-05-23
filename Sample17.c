#include <stdio.h>
int main()
{
    char *swap[] = {"Hii",
                    "Kirk"}; // Important
    char *t;
    int i;
    printf("Original Strings = %s\t%s\n", swap[0], swap[1]);
    t = swap[0];
    swap[0] = swap[1];
    swap[1] = t;
    printf("Swapped Strings = %s\t%s\n", swap[0], swap[1]);
    return 0;
}