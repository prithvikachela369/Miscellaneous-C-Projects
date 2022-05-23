#include <stdio.h>
struct emp
{
    int emp_code;
    char emp_name[10];
    int d, m, y;
};
struct emp e[100];
int main()
{
    int d1, m1, y1, i;
    // ----------------------------------------

    e[0].emp_code = 00;
    e[1].emp_code = 01;
    e[2].emp_code = 02;
    e[3].emp_code = 03;
    // ----------------------------------------

    // e[0].emp_name = "A";
    // e[1].emp_name = "B";
    // e[2].emp_name = "C";
    // e[3].emp_name = "D";
    printf("Enter the Employee names\n");
    for (int i = 0; i <= 3; i++)
    {
        scanf("%s", &e[i].emp_name);
        fflush(stdin);
    }

    // ----------------------------------------

    e[0].d = 12;
    e[0].m = 11;
    e[0].y = 2018;
    // ----------------------------------------

    e[1].d = 12;
    e[1].m = 10;
    e[1].y = 2021;
    // ----------------------------------------

    e[2].d = 1;
    e[2].m = 5;
    e[2].y = 2019;
    // ----------------------------------------

    e[3].d = 22;
    e[3].m = 1;
    e[3].y = 2010;
    // ----------------------------------------

    printf("Input the current date DD/MM/YYYY");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    for (i = 0; i <= 3; i++)
    {
        int d2 = 0;
        int m2 = 0;
        int y2 = 0;
        d2 = d1 - e[i].d;
        if (d2 <= 0)
        {
            d1 = d1 + 30;
            d2 = d1 - e[i].d;
            m1 = m1 - 1;
            m2 = m1 - e[i].m;
            if (m2 <= 0)
            {
                m1 = m1 + 12;
                m2 = m1 - e[i].m;
                y1 = y1 - 1;
                y2 = y1 - e[i].y;
            }
            else
            {
                m2 = m1 - e[i].m;
                y2 = y1 - e[i].y;
            }
        }
        else
        {
            m2 = m1 - e[i].m;
            if (m2 <= 0)
            {
                m1 = m1 + 12;
                m2 = m1 - e[i].m;
                y1 = y1 - 1;
                y2 = y1 - e[i].y;
            }
            else
            {
                m2 = m1 - e[i].m;
                y2 = y1 - e[i].y;
            }
        }
        if (y2 >= 3)
        {
            printf("Generating data for employees whose tenure is greater then 3 years......\n");
            printf("Emloyee Code = %d\n", e[i].emp_code);
            printf("Employee Name = %s\n", e[i].emp_name);
            printf("Employee Joining date = %d/%d/%d\n", e[i].d, e[i].m, e[i].y);
        }
    }
    return 0;
}