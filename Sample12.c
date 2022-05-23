#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[50], ext[50];
    char *s, *t;
    int p, n, i;
    printf("Enter a string\n");
    scanf("%s", &str);
    printf("Enter the position to start Extraction\n");
    scanf("%d", &p);
    printf("Enter the number of characters to extract\n");
    scanf("%d", &n);
    s = str;
    t = ext;
    if (p < 0 || p > strlen(str))
    {
        printf("Improper position Value\n");
        exit(0);
    }
    if (n < 0)
    {
        printf("Invalid operation\n");
    }
    if (n > strlen(str))
    {
        n = n - strlen(str) - 1;
    }
    s = s + p;
    for (i = 0; i < n; i++)
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
    printf("The Substring is: %s\n", ext);
    return 0;
}