#include <stdio.h>
int main()
{
    int sal;
    printf("Enter the salary (Rs 5000 to 40000)\n");
    scanf("%d", &sal);

    sal >= 25000 && sal <= 40000 ? printf("Manager\n") : (sal >= 15000 && sal < 25000 ? printf("Accountant\n") : printf("Clerk\n"));

    return 0;
}