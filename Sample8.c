#include <stdio.h>
int xstrlen(char *);
int main()
{
    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    int len1;
    len1 = xstrlen(arr);
    printf("%d", len1);
    return 0;
}
int xstrlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}