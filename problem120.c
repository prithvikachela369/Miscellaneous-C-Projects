#include <stdio.h>
#include <string.h>
int main()
{
    char s[60] = {"Hello guys chai pilo, garam he, biscuit khalo "};
    int i;
    char ch = '_';

    for (i = 0; i <= sizeof(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            s[i] = ch;
        }
    }
    printf("%s", s);
    return 0;
}