#include <stdio.h>
int main()
{
    char c;

    printf("Please input the character\n");
    scanf(" %c", &c);

    c >= 97 && c <= 122 ? printf("A lowerCase alphabet\n") : printf("Other type of character\n");

    return 0;
}