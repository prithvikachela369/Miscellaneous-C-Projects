#include <stdio.h>

int main()
{
    char ch;
    printf("Input the character\n");
    scanf(" %c", &ch);

    if (ch >= 69 && ch <= 90)
    {
        printf("The Character is upperCase\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("The Character is lowerCase\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("The character is a Digit\n");
    }
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        printf("The character is a Special symbol\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}