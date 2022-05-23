#include <stdio.h>
#include <string.h>
int main()
{
    char fib[50], lastterm[50] = "A", newterm[50] = "B";
    int i;
    for (i = 0; i <= 5; i++)
    {
        strcpy(fib, lastterm);
        strcat(fib, newterm);
        printf("%s\n", fib);
        strcpy(newterm, lastterm);
        strcpy(lastterm, fib);
    }
    return 0;
}