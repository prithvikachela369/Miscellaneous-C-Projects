#include <stdio.h>
#include <string.h>
void xstrrev(char *s)
{
    int i, l;
    char *t, temp;
    l = strlen(s);
    t = s + l - 1; // ABC\0_ _ _ Space for the characters get reserved(Excluding '\0')
    for (i = 1; i <= l / 2; i++)
    {
        temp = *s;
        *s = *t;
        *t = temp;
        s++;
        t--;
    }
}
int main()
{
    char str[][50] = {"Issac asimov Foundation",
                      "Douglas adams Hitchikers guide to the galaxy",
                      "Richard feyman's Six peices"};
    int i;
    for (i = 0; i <= 2; i++)
    {
        xstrrev(str[i]);
        printf("%s\n", str[i]);
    }
}