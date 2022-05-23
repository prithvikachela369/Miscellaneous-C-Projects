#include <stdio.h>
#include <string.h>
int main()
{
    char x[50] = "a", z[50];
    char y[50] = "b";
    int i;
    for (i = 0; i <= 5; i++)
    {

        strcpy(z, x); /*copying x into z*/
        strcpy(x, y); /*copying y into x*/
        printf("%s\t", x);
        strcat(y, z); /*adding (concatinating) z in y*/
    }
    return 0;
}