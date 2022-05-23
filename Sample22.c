#include <stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];
    int i;
    int dh;
    for (i = 0; i <= 2; i++)
    {
        printf("Enter the details\n");
        scanf("%c", &b[i].name);
        scanf("%f", &b[i].price);
        scanf("%d", &b[i].pages);
        while ((dh = getchar()) != '\n')
            ; // to clear the input buffer
    }
    for (i = 0; i <= 2; i++)
    {
        printf("%c\t%f\t%d\n", b[i].name, b[i].price, b[i].pages);
    }
    return 0;
}