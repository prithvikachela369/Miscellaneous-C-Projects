#include <stdio.h>
int main()
{
    float l, b, r;
    float pi = 3.14;
    float Ra, Rp;
    float Ca, Cp;

    printf("Type the Length\n");
    scanf("%f", &l);
    printf("Type the Breadth\n");
    scanf("%f", &b);
    printf("Type the Radius of the circle\n");
    scanf("%f", &r);

    Ra = l * b;
    Rp = 2 * (l + b);
    Cp = 2 * pi * r;
    Ca = pi * r * r;

    printf("Rectangle Area is %f\n", Ra);
    printf("Rectangle Perimeter is %f\n", Rp);
    printf("Circle Circumference is %f\n", Cp);
    printf("Circle Area is %f\n", Ca);
    return 0;
}