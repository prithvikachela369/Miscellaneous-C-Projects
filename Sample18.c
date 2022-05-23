#include <stdio.h>
#include <string.h>
int main()
{
    char *str[] = {"hello", "konichiwa", "Ni hao", "Namaste", "Kem cho", "nuqneH"};
    char str1[30], *p;
    int i;
    printf("Enter the String to be searched\n");
    scanf("%s", &str1);
    p = NULL;
    for (i = 0; i < sizeof(str1); i++)
    {
        p = strstr(str[i], str1);
        if (p != NULL)
        {
            printf("%s found in the array\n", str1);
            return 0;
        }
        }
    printf("%s not found in the array\n", str1);
    return 0;
}