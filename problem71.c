#include <stdio.h>

void marks(float *, float *);
int main()
{
    float avg, per;

    marks(&avg, &per);

    printf("Average = %f\n", avg);
    printf("Percentage = %f\n", per);

    return 0;
}

void marks(float *avg, float *per)
{
    int m1, m2, m3;

    printf("Input the marks in 3 subjects\n");
    scanf("%d %d %d", &m1, &m2, &m3);

    *avg = *per = (m1 + m2 + m3) / 3.0f;
}
