#include <stdio.h>
#include "problem85.h"

int main()
{
    float x, h, b, r, y, z;
    float ar_tria, per_tria, ar_sq, per_sq, ar_circ, per_circ;

    printf("Input the length of the side of the square\n");
    scanf("%f", &x);

    per_sq = PERSQUA(x);
    ar_sq = ASQUA(x);

    printf("Area of the square is %f\n", ar_sq);
    printf("Perimeter of the square is %f\n", per_sq);

    printf("Input the length of base of the triangle\n");
    scanf("%f", &b);

    printf("Input the length of height of the triangle\n");
    scanf("%f", &h);

    ar_tria = ATRIA(h, b);
    printf("Area of the triangle is %f\n", ar_tria);

    printf("Input the length of 1st side of the triangle\n");
    scanf("%f", &x);

    printf("Input the length of 2nd side of the triangle\n");
    scanf("%f", &y);

    printf("Input the length of 3rd side of the triangle\n");
    scanf("%f", &z);

    per_tria = PERTRIA(x, y, z);
    printf("Perimeter of the triangle is %f\n", per_tria);

    printf("Input the radius of the circle\n");
    scanf("%f", &r);

    per_circ = PERCIRC(r);
    ar_circ = ACIRC(r);

    printf("Circumferemnce of the circle is %f\n", per_circ);
    printf("Area of the circle is %f\n", ar_circ);
}