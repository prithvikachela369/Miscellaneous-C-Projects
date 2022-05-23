#include <stdio.h>
#include <math.h>

// program to find the excenter of a triangle
// https://media.geeksforgeeks.org/wp-content/cdn-uploads/20210202120334/Excenter.jpg
// https://i.stack.imgur.com/3H4vt.jpg

void excenter(float *, float *, float *, float *, float *, float *, float *, float *, float *, float *, float *, float *);
float distance(float, float, float, float);
int main()
{
    float x1, x2, x3, y1, y2, y3, l1, l2, l3, l1A, l2A, l3A;

    printf("Input the value of x1\n");
    scanf("%f", &x1);

    printf("Input the value of y1\n");
    scanf("%f", &y1);

    printf("Input the value of x2\n");
    scanf("%f", &x2);

    printf("Input the value of y2\n");
    scanf("%f", &y2);

    printf("Input the value of x3\n");
    scanf("%f", &x3);

    printf("Input the value of y3\n");
    scanf("%f", &y3);

    printf("Input the value of A\n");

    excenter(&x1, &y1, &x2, &y2, &x3, &y3, &l1, &l2, &l3, &l1A, &l2A, &l3A);

    printf("%f , %f\n", l1, l1A);
    printf("%f , %f\n", l2, l2A);
    printf("%f , %f\n", l3, l3A);

    return 0;
}

void excenter(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3, float *l1, float *l2, float *l3, float *l1A, float *l2A, float *l3A)
{
    float a = distance(*x2, *x3, *y2, *y3);
    float b = distance(*x3, *x1, *y3, *y1);
    float c = distance(*x1, *x2, *y1, *y2);

    *l1 = ((-a * *x1 + b * *x2 + c * *x3) / (-a + b + c));

    *l1A = ((-a * *y1 + b * *y2 + c * *y3) / (-a + b + c));

    *l2 = ((a * *x1 - b * *x2 + c * *x3) / (a - b + c));

    *l2A = ((a * *y1 - b * *y2 + c * *y3) / (a - b + c));

    *l3 = ((a * *x1 + b * *x2 - c * *x3) / (a + b - c));

    *l3A = ((a * *y1 + b * *y2 - c * *y3) / (a + b - c));
}

float distance(float a, float b, float c, float d)
{
    return (float)sqrt(pow(b - a, 2) + pow(d - c, 2) * 1.0);
}