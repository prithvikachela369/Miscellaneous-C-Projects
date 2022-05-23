#include <stdio.h>
void xstrcpy(char *, char *);
int main()
{
    char source[] = "abcdefghijklmnopqrstuvwxyz", target[50];
    xstrcpy(target, source);
    printf("Source: %s\n", source);
    printf("Target: %s\n", target);
    return 0;
}
void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}