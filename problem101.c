#include <stdio.h>

void Left(int *, int);
void Right(int *, int);

int main()
{
    int deque[6] = {9, 8, 7, 6, 5, 4};

    Left(&deque, 6);
    Right(&deque, 6);
    return 0;
}

void Left(int *deqL, int num)
{
    int t, i;
    t = deqL[0];

    for (i = 0; i <= num - 1; i++)
    {
        deqL[i] = deqL[i + 1];
    }

    deqL[5] = t;
    printf("Retreiving %d from left and Inserting to right\n", t);
    for (i = 0; i <= num - 1; i++)
    {
        printf("%d\t", deqL[i]);
    }
}

// The modified array is 8, 7, 6, 5, 4, 9

void Right(int *deqR, int num)
{
    int i, a, b, c, d, e, f;

    a = deqR[0];
    b = deqR[1];
    c = deqR[2];
    d = deqR[3];
    e = deqR[4];
    f = deqR[5];

    deqR[0] = deqR[5];
    deqR[1] = a;
    deqR[2] = b;
    deqR[3] = c;
    deqR[4] = d;
    deqR[5] = e;

    printf("\n");

    printf("Retreiving %d from right and Inserting to left\n", f);

    for (i = 0; i <= num - 1; i++)
    {
        printf("%d\t", deqR[i]);
    }
}
