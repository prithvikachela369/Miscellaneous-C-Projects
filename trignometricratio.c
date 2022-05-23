#include <stdio.h>
#include <math.h>
int main()
{
    float ang, s, c, t;

    printf("Please input the angle\n");
    scanf("%f", &ang);

    /* Converting angles to radians */
    ang = ang * 3.14 / 180;

    s = sin(ang);
    c = cos(ang);
    t = tan(ang);

    printf("%f\n", s);
    printf("%f\n", c);
    printf("%f\n", t);
    return 0;
}