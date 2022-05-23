#include <stdio.h>

int main()
{
    char gen, mas;
    int age;

    printf("Please input your Gender(M or F)\n");
    scanf(" %c", &gen);

    printf("Please input your Marital status(Y or N)\n");
    scanf(" %c", &mas);

    printf("Please input your Age\n");
    scanf("%d", &age);

    if ((mas == 'Y') || (mas == 'N' && gen == 'M' && age > 30) || (mas == 'N' && gen == 'F' && age > 25))
    {
        printf("The driver should be insured\n");
    }
    else
    {
        printf("The driver should not be insured\n");
    }
    return 0;
}