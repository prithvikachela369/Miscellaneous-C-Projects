#include <stdio.h>

struct student
{
    int r_n;
    char name[50];
    char dep[150];
    char course[150];
    int y_o_j;
};
struct student s[450];

void set_data();
void get_data();
void rn_get_data();
int main()
{
    printf("Enter the data for each student\n");
    printf("\n");
    set_data();
    printf("\n\nThe entered data :-\n");
    get_data();
    rn_get_data();
    return 0;
}
void set_data()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Roll Number\n");
        scanf("%d", &s[i].r_n);
        fflush(stdin);
        printf("Enter the Name\n");
        scanf("%s", &s[i].name);
        fflush(stdin);
        printf("Enter the Department\n");
        scanf("%s", &s[i].dep);
        fflush(stdin);
        printf("Enter the Course\n");
        scanf("%s", &s[i].course);
        fflush(stdin);
        printf("Enter the Year of joining\n");
        scanf("%d", &s[i].y_o_j);
        fflush(stdin);
    }
}
void get_data()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", s[i].r_n);
        printf("%s\n", s[i].name);
        printf("%s\n", s[i].dep);
        printf("%s\n", s[i].course);
        printf("%d\n", s[i].y_o_j);
        printf("\n\n");
    }
}
void rn_get_data()
{
    int i, j;
    printf("Input the Roll no. to be searched\n");
    scanf("%d", &j);
    for (i = 0; i < 5; i++)
    {
        if (s[i].r_n == j)
        {
            printf("\n");
            printf("Roll no. - %d\n", s[i].r_n);
            printf("Name - %s\n", s[i].name);
            printf("Department - %s\n", s[i].dep);
            printf("Course - %s\n", s[i].course);
            printf("Year of joining - %d\n", s[i].y_o_j);
        }
    }
}