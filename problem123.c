#include <stdio.h>
#include <string.h>
int main()
{
    char s[100] = {"Please read the following book and give me its review"};
    int i, count = 0;

    for (i = 0; i <= sizeof(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            if (s[i + 1] == 'a' || s[i + 1] == 'A' || s[i + 1] == 'i' || s[i + 1] == 'I' || s[i + 1] == 'e' || s[i + 1] == 'E' || s[i + 1] == 'o' || s[i + 1] == 'O' || s[i + 1] == 'u' || s[i + 1] == 'U')
            {
                count++;
                printf("%c%c\n", s[i], s[i + 1]);
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
    printf("Number of Occurences = %d\n", count);
    return 0;
}