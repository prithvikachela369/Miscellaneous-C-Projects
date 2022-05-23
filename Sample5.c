#include <stdio.h>
#include <math.h>
int main()
{
    float x[15] = {34.22, 39.87, 41.85, 43.32, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[15] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float r, sumx = 0, sumy = 0, sumxy = 0, sumxSQ = 0, sumySQ = 0;
    int i;
    for (i = 0; i <= 10; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + (x[i] * y[i]);
        sumxSQ = sumxSQ + (x[i] * x[i]);
        sumySQ = sumySQ + (y[i] * y[i]);
    }
    r = (sumxy - (sumx * sumy)) / sqrt((11 * sumxSQ - (pow(sumx, 2))) * (11 * sumySQ - (pow(sumy, 2))));
    printf("%f\n", r);
    return 0;
}