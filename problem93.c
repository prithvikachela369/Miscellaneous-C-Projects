#include <stdio.h>

int main()
{
    int arr[25] = {10, 12, 1322, 103, 121, 130, 103, 53, 5435, 32, 3, 21, 66, 43, 22, 75, 335, 643, 73, 7432, 14, 27, 1, 9, 2}, i, *a, b;

    a = &arr[0];
    b = arr[0];

    for (i = 0; i <= 24; i++)
    {
        if (b > (*a))
        {
            b = *a;
        }
        a++;
    }
    printf("The smallest number is %d\n", b);

    return 0;
}