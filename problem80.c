#include <stdio.h>

void conv(int);
int main()
{
    int i;
    printf("Input the number\n");
    scanf("%d", &i);

    conv(i);
}
void conv(int i)
{
    int a;
    do
    {
        a = i % 2;
        i = i / 2;

        printf("%d\n", a);
    } while (i != 1);
}