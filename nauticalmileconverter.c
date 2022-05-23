#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2, g1, g2;
    float dnau;

    printf("Please input the latitude Co-ordinates in degrees\n");
    scanf("%f", &l1);
    scanf("%f", &l2);

    printf("Please input the longitude Co-ordinates in degrees\n");
    scanf("%f", &g1);
    scanf("%f", &g2);

    dnau = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));

    printf("The distance in Nautical miles is %f", dnau);
    return 0;
}