#include <stdio.h>
int main()
{
    int num[10] = {1, 2, 3, 4, 1, 13, 4, 12, 1, 4}, i, j, count = 0;

    printf("Input the number to search\n");
    scanf("%d", &i);

    for (j = 0; j <= 9; j++)
    {
        if (num[j] == i)
        {
            count++;
        }
    }
    printf("The number %d was found %d times\n", i, count);
    return 0;
}