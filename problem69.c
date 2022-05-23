#include <stdio.h>

void primefactor(int);
int main()
{
    int num;

    printf("Input the number\n");
    scanf("%d", &num);

    primefactor(num);
    return 0;
}
void primefactor(int numb)
{
    int i = 2;

    while (numb != 1)
    {
        if (numb % i == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            i++;
            continue;
        }
        numb = numb / i;
    }
}