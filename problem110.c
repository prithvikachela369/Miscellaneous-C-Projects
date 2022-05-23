#include <stdio.h>
#include <string.h>

/*
The my_strcat() function accepts two arguments of type pointer to char or (char*) and returns a pointer to the first string i.e strg1.

In line 3, we have assigned the pointer strg1 to start, this step is necessary otherwise we will lose track of the address of the beginning of the first string (strg1).
The job of the first while is loop is to move the pointer strg1 to the last character i.e '\0'. So that the second while loop can begin appending character at this position.
*/

void xstrcat(char *, char *);
int main()
{
    char source[] = "LOL123456", target[20] = "akaBlah";
    xstrcat(target, source);
    printf("%s\n", target);
    return 0;
}
void xstrcat(char *t, char *s)
{
    char *start = t;

    while (*t != '\0')
    {
        t++;
    }

    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }

    *t = '\0';
}