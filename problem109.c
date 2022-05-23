#include <stdio.h>
#include <conio.h>

void shift(int *base)
{
    int *web, fir, sec, i, j, k, l;
    web = base;
    fir = *base;       //saving first value in fir variable
    sec = *(base + 1); //saving second value insec variable
    // --------------------------------------

    for (i = 0, k = 0, l = 3; i < 4; i++, k = k + 5, l = l + 5)
    {
        fir = *(base + k);
        sec = *(base + k + 1);
        for (j = 0; j < 3; j++)
        {
            *(web + j + k) = *((base + 2) + j + k);
        }
        *(web + l) = fir;
        *(web + l + 1) = sec;
    }
    // for (j = 0; j < 3; j++)
    // {
    //     *(web + j) = *((base + 2) + j);
    // }
    // *(web + 3) = fir;
    // *(web + 4) = sec;
    // ---------------------------------------
    // fir = *(base + 5);
    // sec = *(base + 6);
    // for (j = 0; j < 3; j++)
    // {
    //     *(web + j + 5) = *((base + 2) + j + 5);
    // }
    // *(web + 8) = fir;
    // *(web + 9) = sec;
    // ---------------------------------------
    // fir = *(base + 10);
    // sec = *(base + 11);
    // for (j = 0; j < 3; j++)
    // {
    //     *(web + j + 10) = *((base + 2) + j + 10);
    // }
    // *(web + 13) = fir;
    // *(web + 14) = sec;
    // //----------------------------------------
    // fir = *(base + 15);
    // sec = *(base + 16);
    // for (j = 0; j < 3; j++)
    // {
    //     *(web + j + 15) = *((base + 2) + j + 15);
    // }
    // *(web + 18) = fir;
    // *(web + 19) = sec;
}

int main()
{
    int a[4][5], i, j;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf("Enter the value:-");
            scanf("%d", &a[i][j]);
        }
    }

    shift(a); //calling function

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
