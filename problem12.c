#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Please input the number\n");
    scanf("%f", &num);

    num = abs(num);

    printf("The absolute value is %f", num);
    return 0;
}