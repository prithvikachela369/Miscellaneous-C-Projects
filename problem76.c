#include <stdio.h>

void euclidlemma(int *, int *, int *);
int main()
{
    int a, b, hcf; // by euclids lemma a = bq + r where 0 <= r < b;

    printf("Input the value of a\n");
    scanf("%d", &a);

    printf("Input the value of b\n");
    scanf("%d", &b);

    euclidlemma(&a, &b, &hcf);

    printf("The H.C.F of a and b is %d\n", hcf);
    return 0;
}

void euclidlemma(int *a, int *b, int *hcf)
{

    int x;
    while (1)
    {
        if (*a % *b != 0)
        {
            x = *a;
            *a = *b;
            *b = (x - (*b * (x / *b)));
        }
        else
        {
            *hcf = *b;
            break;
        }
    }
}