#include <stdio.h>
#include <string.h>
int main()
{
    char s[20] = {"tony stark"};
    int i;
    char f, l;

    for (i = 0; i <= sizeof(s); i++)
    {
        if (i == 0)
        {
            f = s[i];
        }
        if (s[i] == ' ')
        {
            l = s[i + 1];
        }
    }
    printf("%c%c", f, l);
    return 0;
}