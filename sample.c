// #include <stdio.h>
// void binary(int);
// int main()
// {
//     // Without recursion
//     int num, r;
//     printf("Enter a positive integer (Without recursion)\n");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         r = num % 2;
//         if (r == 0)
//         {
//             printf("1");
//         }
//         else if (r == 1)
//         {
//             printf("0");
//         }

//         num = num / 2;
//     }

//     // With recursion
//     int num2;
//     printf("\nEnter a positive integer (With recursion)\n");
//     scanf("%d", &num2);
//     binary(num2);
//     return 0;
// }
// void binary(int num2)
// {
//     int r;
//     if (num2 != 0)
//     {
//         r = num2 % 2;
//         if (r == 0)
//         {
//             printf("1");
//         }
//         if (r == 1)
//         {
//             printf("0");
//         }
//         binary(num2 / 2);
//     }
// }

#include <stdio.h>
#include <stdlib.h>
void fib(int, int, int);
int main()
{
    int old = 1, new = 1;
    printf("The fibonnaci series:-\n");
    printf("%d\n%d\n", old, new);
    fib(old, new, 23);
    return 0;
}
void fib(int old, int new, int terms)
{
    int current;
    if (terms != 0)
    {
        current = old + new;
        printf("%d\n", current);
        terms = terms - 1;
        fib(new, current, terms);
    }
    else
    {
        exit(0);
    }
}