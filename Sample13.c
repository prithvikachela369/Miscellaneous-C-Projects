#include <stdio.h>
int main()
{
    int num = 0, i;
    char str[100];
    printf("Enter a string containing number\n");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            num = num * 10 + (str[i] - 48); // sort of a formula to convert into integer
        }
        else
        {
            printf("Invalid String\n");
        }
    }
    printf("The number is %d\n", num);
    return 0;
}