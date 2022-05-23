#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <Windows.h>

void swap(char *a, char *b)
{
    char temp[20];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort_names(char **name_list, int total_names)
{
    int i, j;
    for (i = 0; i < total_names; i++)
    {
        for (j = i + 1; j < total_names; j++)
        {
            if (strcmp(name_list[i], name_list[j]) > 0)
            {
                swap(name_list[j], name_list[i]);
            }
        }
    }
}
int main()
{
    char *name_list[100], *p, name[20], ans = 'y';
    int i = 0, j = 0, a, b;

    while (ans == 'y')
    {
        printf("Enter the name :");
        scanf("%s", name);
        p = (char *)malloc(strlen(name));
        strcpy(p, name);
        name_list[i] = p;
        i++;
        while (getchar() != '\n')
            ; // for clearing the buffer stream
        printf("\nWant to enter another name (y/n) : ");
        scanf("%c", &ans);
    }
    printf("\n");
    sort_names(name_list, i);
    system("cls");
    printf("\n\t\t\tNames in sorted order are follows.\n\n");
    for (j = 0; j <= i - 1; j++)
    {
        printf("%s\t", name_list[j]);
    }
    return 0;
}