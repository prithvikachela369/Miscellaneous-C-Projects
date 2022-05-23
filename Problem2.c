#include <stdio.h>
int main()
{
    float km, mi, in, ft, cm, m;
    printf("Enter the distance in Kilometers(km)\n");
    scanf("%f", &km);

    mi = km / 1.6;
    m = km * 1000;
    cm = m * 100;
    in = cm / 2.54;
    ft = cm / 30;
    printf("miles = %f\n", mi);
    printf("metres = %f\n", m);
    printf("centimeters = %f\n", cm);
    printf("inches = %f\n", in);
    printf("feets = %f\n", ft);
    return 0;
}