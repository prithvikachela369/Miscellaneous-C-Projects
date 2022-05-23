#include <stdio.h>
#include <string.h>
void xstrrev(char *);
int main()
{
    char str[][65] = {
        "hii\t" // here \t is considered as a character
        "B\t"   // therefore the length of the string becomes 9
        "C\t"
        "D"};
    int i;
    // for (i = 0; i <= 0; i++)
    //{ // dont use for loop unless commas in the elements of arrays
    xstrrev(str[0]);
    printf("%s\t\n", str[0]);
    //}
    return 0;
}
void xstrrev(char *s)
{
    int i, l;
    char *t, temp;
    l = strlen(s);
    t = s + l - 1;
    printf("%d\n", l);
    for (i = 0; i <= strlen(s) - 1; i++)
    {
        temp = *s;
        *s = *t;
        *t = temp;
        s++;
        t--;
    }
}