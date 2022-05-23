#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], new[30];
    int p, n, a, i;
    char *t, *s;
    printf("Enter a String: \n");
    scanf("%s", str);
    printf("Enter the position and number of Strings to extract: \n");
    scanf("%d", &p);
    scanf("%d", &n);

    s = str;
    t = new;

    a = strlen(str);

    if (p < 0 && p > a)
    {
        printf("Input the position smaller than the size of the String\n");
    }
    else if (n < 0 && n > a)
    {
        printf("Input the numbers of strings to extract smaller than the size of the String\n");
    }

    else
    {
        s = s + p;
        for (i = 0; i <= n; i++)
        {
            *t = *s;
            s++;
            t++;
        }
        *t = '\0';
        printf("The Substring is %s\n", new);
    }
    return 0;
}