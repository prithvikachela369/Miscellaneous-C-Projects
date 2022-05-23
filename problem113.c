#include <stdio.h>
int main()
{
    char str[20];
    int num = 0, i;
    printf("Enter the String containing characters\n");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
            num = num * 10 + (str[i] - 48);

        else
            printf("Invalid String\n");
    }
    printf("%d\n", num);
    return 0;
}