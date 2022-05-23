#include <stdio.h>
int xstrcmp(char *, char *);
int main()
{
    char a[] = "Hello", b[] = "Hello";
    int c;
    c = xstrcmp(a, b);
    printf("%d\n", c);
    return 0;
}
int xstrcmp(char *a, char *b)
{
    while ((*a != '\0' && *a != '\0') && *a == *b)
    {
        a++;
        b++;
    }
    if (*a == *b)
    {
        return 0;
    }
    else
    {
        return *a - *b;
    }
}