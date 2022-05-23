#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, marks;

    m1 = 60;
    m2 = 59;
    m3 = 50;
    m4 = 49;
    m5 = 40;

    printf("Please input the marks\n");
    scanf("%d", &marks);

    if (marks >= m1)
    {
        printf("First division\n");
    }
    else if (marks >= m3 && marks <= m2)
    {
        printf("Second division\n");
    }
    else if (marks >= m5 && marks <= m4)
    {
        printf("Third division\n");
    }
    else if (marks < m5)
    {
        printf("Fail, Try again\n");
    }

    return 0;
}