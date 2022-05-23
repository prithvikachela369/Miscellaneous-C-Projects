#include <stdio.h>
#include <string.h>
int main()
{
    struct emp
    {
        char name[100];
        int age;
        float salary;
    };
    struct emp e1 = {"Spock", 29, 5600.56};
    struct emp e2, e3;
    strcpy(e2.name, e1.name); // piece-meal copying
    e2.age = e1.age;
    e3 = e2;
    printf("%s\t%d\t%f\n", e1.name, e1.age, e1.salary);
    printf("%s\t%d\t%f\n", e2.name, e2.age, e2.salary);
    printf("%s\t%d\t%f\n", e3.name, e3.age, e3.salary);
    return 0;
}