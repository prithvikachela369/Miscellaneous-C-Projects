#include <stdio.h>
#include <stdlib.h>
int main()
{
    float h, w, bmi;

    printf("Please input the weight (In kilograms)\n");
    scanf("%f", &w);

    printf("Please input the height (In metres)\n");
    scanf("%f", &h);

    bmi = w / (h * h);

    printf("BMI = %f\n", bmi);

    if (bmi <= 15)
    {
        printf("Starvation\n");
        exit(0);
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Anorexic\n");
        exit(0);
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Underweight\n");
        exit(0);
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Ideal\n");
        exit(0);
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight\n");
        exit(0);
    }
    else if (bmi >= 30 && bmi <= 38.9)
    {
        printf("Obese\n");
        exit(0);
    }
    else if (bmi >= 39 && bmi <= 42)
    {
        printf("Morbidly Obese\n");
        exit(0);
    }
    return 0;
}