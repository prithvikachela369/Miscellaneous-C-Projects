#include <stdio.h>
int main()
{
    char c;

    printf("Please input the character\n");
    scanf(" %c", &c);

    c >= 0 && c <= 47 || c >= 58 && c <= 64 || c >= 91 && c <= 96 || c >= 123 && c <= 127 ? printf("A Special symbol\n") : printf("Other type of character\n");

    return 0;
}