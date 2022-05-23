#include <stdio.h>
#define n 6
int main()
{
    int arr[n] = {1, 21, 1, 9, 21, 10}, i, j;

    for (i = 0, j = 1; i <= n - 1, j <= n; i++, j++)
    {
        if (arr[i] == arr[n - j])
        {
            printf("Yes arr[%d] and arr[%d] a.k.a Equal\n", i, n - j);
        }
        else
        {
            printf("No arr[%d] and arr[%d] a.k.a Not equal\n", i, n - j);
        }
    }
    return 0;
}