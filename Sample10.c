#include <stdio.h>
#include <string.h>
void xstrcat(char *, char *);
int main()
{
    char source[] = "AND PROSPER", target[40] = "LIVE LONG";

    printf("%s\n", source);
    xstrcat(target, source);
    printf("%s\n", target);
    return 0;
}
void xstrcat(char *t, char *s)
{
    int i, j, lent, lens;
    lent = strlen(t);
    lens = strlen(s);
    for (i = lent, j = 0; i <= *s; i++, j++)
    {
        t[i] = s[j];
    }
}
