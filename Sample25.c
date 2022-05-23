#include <stdio.h>
struct book
{
    char name[256];
    char auth[256];
    int pages;
};
void d(char *, char *, int);
void d1(struct book);
void d2(struct book *);

int main()
{
    struct book b = {"Hitchikers guide to the galaxy", "Adam douglas", 787};
    d(b.name, b.auth, b.pages);
    d1(b);
    d2(&b);
    return 0;
}
void d(char *n, char *a, int p)
{
    printf("%s\t%s\t%d\n", n, a, p);
}
void d1(struct book b)
{
    printf("%s\t%s\t%d\n", b.name, b.auth, b.pages);
}
void d2(struct book *b1)
{
    printf("%s\t%s\t%d\n", b1->name, b1->auth, b1->pages);
    // -> is the operator to refer to the structure elements(-> operator is used for pointer to a structure)
}