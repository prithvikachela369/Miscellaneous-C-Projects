#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    int acc_num;
    char book_title[200];
    char book_auth[200];
    int book_price;
    char book_issued;
};
struct book b[300];
int num = 0;
int i, temp, j;
int prev_num = 0;
int main()
{
    while (1)
    {
        int choice;
        printf("Choose from the below options\n\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all the books of the given author\n");
        printf("4. List the title of specified book based on accesion number\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n\n");
        printf("Input your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
            char author[200]; // for use in case 3
            int accesion_num; // for use in case 4
        case 1:
            printf("Enter the number of books to be added\n");
            scanf("%d", &num);
            for (i = prev_num; i < num + prev_num; i++)
            {
                printf("Enter the book Accession number\n");
                scanf("%d", &b[i].acc_num);
                fflush(stdin);
                printf("Enter the book title\n");
                scanf("%[^\n]%*c", b[i].book_title);
                fflush(stdin);
                printf("Enter the book Author\n");
                scanf("%[^\n]%*c", b[i].book_auth);
                fflush(stdin);
                printf("Enter the book price\n");
                scanf("%d", &b[i].book_price);
                fflush(stdin);
                printf("Is the book Issued? (Y/N)\n");
                scanf("%c", &b[i].book_issued);
                fflush(stdin);
            }
            prev_num = num + prev_num;
            break;
        case 2:
            for (i = 0; i < prev_num; i++)
            {
                printf("Accession number - %d\n", b[i].acc_num);
                printf("Book title - %s\n", b[i].book_title);
                printf("Book author - %s\n", b[i].book_auth);
                printf("Book price - %d\n", b[i].book_price);
                if (b[i].book_issued == 'Y')
                {
                    printf("Book is Issued\n");
                }
                else
                {
                    printf("Book is not issued\n");
                }
            }
            break;
        case 3:
            printf("Enter the name of the author\n");
            scanf("%s", &author);
            for (i = 0; i < prev_num; i++)
            {
                if ((strcmp(author, b[i].book_auth) == 0))
                {
                    printf("Book written - %s\n", b[i].book_title);
                }
                else
                {
                    printf("No Author found\n");
                }
            }
            break;
        case 4:
            printf("Enter the accesion number of the book\n");
            scanf("%d", &accesion_num);
            for (i = 0; i < prev_num; i++)
            {
                if (accesion_num == b[i].acc_num)
                {
                    printf("Book title: %s\n", b[i].book_title);
                }
                else
                {
                    printf("No accesion number found\n");
                }
            }
            break;
        case 5:
            printf("The number of books are %d\n", prev_num);
            break;
        case 6:
            for (i = 0; i < prev_num; i++)
            {
                printf("Book accession number - %d\n", b[i].acc_num);
                printf("Book title: %s\n", b[i].book_title);
            }
            break;
        case 7:
            exit(0);
        }
    }

    return 0;
}