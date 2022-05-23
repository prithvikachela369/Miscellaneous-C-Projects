#include <stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1, b2, b3;
    printf("Enter the Name, price, pages of the book: \n");
    scanf("%c", &b1.name);
    scanf("%f", &b2.price);
    scanf("%d", &b3.pages);
    printf("%c\n", b1.name);
    printf("%f\n", b2.price);
    printf("%d\n", b3.pages);
    return 0;
}