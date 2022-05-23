#include <stdio.h>
#include "test2.h"

int main()
{
    float r;
    printf("Enter the value of radius\n");
    scanf("%f", &r);

    r = circle_area(r);
    printf("%f\n", r);
    return 0;
}
