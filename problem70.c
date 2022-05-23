#include <stdio.h>
#include <math.h>

void stats(int *, int *, double *);
int main()
{
    int sum, average;
    double std;

    stats(&sum, &average, &std);

    printf("Sum = %d\n", sum);
    printf("Average = %d\n", average);
    printf("Standard deviation = %lf\n", std);

    return 0;
}
void stats(int *sum, int *average, double *std)
{
    int n1, n2, n3, n4, n5;

    printf("Input the 5 numbers\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    *sum = n1 + n2 + n3 + n4 + n5;

    *average = (n1 + n2 + n3 + n4 + n5) / 5;

    *std = sqrt((pow(n1 - *average, 2) + pow(n2 - *average, 2) + pow(n3 - *average, 2) + pow(n4 - *average, 2) + pow(n5 - *average, 2)) / 4);
}