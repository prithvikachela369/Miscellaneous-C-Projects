#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 4, i, *p, sum = 0;
    p = (int *)malloc(n * sizeof(int));
    if (p == 0)
    {
        printf("Error allocating memory\n");
    }
    else
    {
        printf("Elements of array\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
            sum = sum + p[i];
        }
        printf("Sum : %d", sum);
    }
    return 0;
}