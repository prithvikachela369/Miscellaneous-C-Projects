#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, num, fact, n, i;

    while (1)
    {
        printf("1. Factorial\n");
        printf("2. Prime or Non-prime\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");

        printf("\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input the number\n");
            scanf("%d", &n);

            fact = n * (n - 1);

            printf("%d\n", fact);
            break;

        case 2:
            printf("Input the number\n");
            scanf("%d", &n);

            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }

            if (i == n)
            {
                printf("A prime number\n");
            }
            break;

        case 3:
            printf("Input the number\n");
            scanf("%d", &n);

            if (n % 2 == 0)
            {
                printf("An Even number\n");
            }
            else if (n % 2 != 0)
            {
                printf("An odd number\n");
            }
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Wrong choice :(\n");
            break;
        }
    }

    return 0;
}