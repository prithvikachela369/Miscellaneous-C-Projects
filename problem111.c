#include <stdio.h>
#include <string.h>

void xstrcomp(char *, char *);
int main()
{
    char source1[20] = "LOL", source2[20] = "aka";
    xstrcomp(source1, source2);
    return 0;
}
void xstrcomp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            printf("0");
        }
        s1++;
        s2++;
    }
}