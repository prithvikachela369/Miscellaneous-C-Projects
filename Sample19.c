#include <stdio.h>
#include <string.h>
int main()
{
    char *str[] = {
        "C", "B", "Ab", "E", "D", "An"};
    char *t;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if ((strcmp(str[i], str[j])) > 0) // if str[i] is greater then str[j] it will return a positive integer value
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%s\t", str[i]);
    }
    return 0;
}