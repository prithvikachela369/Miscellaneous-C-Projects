#include <stdio.h>
int main()
{
    float fah, cel;
    printf("PLease type the temprature(In fahrenheit)\n");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("The temprature in celsius is %f\n", cel);
    return 0;
}