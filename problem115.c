#include <stdio.h>
#include <string.h>
int main()
{
    char isbn[9];
    int i, num = 0, sum = 0;
    printf("Input the ISBN number:\n");
    scanf("%s", isbn);

    for (i = 0; i <= 9; i++)
    {
        isbn[i] = isbn[i] - 48;
        sum = sum + ((i + 1) * isbn[i]);
    }

    if (sum % 11 == 0)
    {
        printf("Valid ISBN number\n");
    }
    else
    {
        printf("Invalid ISBN number\n");
    }

    return 0;
}