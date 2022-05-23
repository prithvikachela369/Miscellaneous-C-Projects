#include <stdio.h>
#include <stdlib.h>
int main()
{
    float ha, cc, ts;

    printf("Please input the Hardness of the steel\n");
    scanf("%f", &ha);

    printf("Please input the carbon content\n");
    scanf("%f", &cc);

    printf("Please input the tensile strength\n");
    scanf("%f", &ts);

    if (ha > 50 && cc < 0.7 && ts > 5600)
    {
        printf("Grade 10\n");
        exit(0);
    }
    else if (ha > 50 && cc < 0.7)
    {
        printf("Grade 9\n");
        exit(0);
    }
    else if (cc < 0.7 && ts > 5600)
    {
        printf("Grade 8\n");
        exit(0);
    }
    else if (ha > 50 && ts > 5600)
    {
        printf("Grade 7\n");
        exit(0);
    }
    else if (ha > 50 || cc < 0.7 || ts > 5600)
    {
        printf("Grade 6\n");
        exit(0);
    }
    else if (ha < 50 && cc > 0.7 && ts < 5600)
    {
        printf("Grade 5\n");
        exit(0);
    }

    return 0;
}