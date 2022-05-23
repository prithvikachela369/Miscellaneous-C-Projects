#include <stdio.h>
#include <string.h>
int main()
{
    char s[60] = {"I am the first person on the planet of Mars"};
    int i;
    char ch = '_';

    for (i = 0; i <= sizeof(s); i++)
    {
        if ((s[i] == 't' || "T") && s[i + 1] == 'h' && s[i + 2] == 'e')
        {
            s[i] = ch;
            s[i + 1] = ch;
            s[i + 2] = ch;
        }
    }
    printf("%s", s);
    return 0;
}