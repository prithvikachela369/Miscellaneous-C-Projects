#include <stdio.h>

int roman(int, int, char);
int main()
{
    int year;

    printf("Input the year\n");
    scanf("%d", &year);

    year = roman(year, 1000, 'M');
    year = roman(year, 500, 'D');
    year = roman(year, 100, 'C');
    year = roman(year, 50, 'L');
    year = roman(year, 10, 'X');
    year = roman(year, 5, 'V');
    year = roman(year, 1, 'l');
    return 0;
}

int roman(int a, int b, char c)
{
    int i, j;
    j = a / b;

    for (i = 1; i <= j; i++)
    {
        printf("%c", c);
    }
    return (a - b * j);
}