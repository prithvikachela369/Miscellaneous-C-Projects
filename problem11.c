#include <stdio.h>
int main()
{
    int Ra, Sa, Aja;

    printf("Input the Age of Ram\n");
    scanf("%d", &Ra);

    printf("Input the Age of Shyam\n");
    scanf("%d", &Sa);

    printf("Enter the Age of Ajay\n");
    scanf("%d", &Aja);

    if (Ra < Sa)
    {
        if (Ra < Aja)
        {
            printf("Ram is the youngest");
        }
    }

    if (Sa < Ra)
    {
        if (Sa < Aja)
        {
            printf("Shyam is the youngest");
        }
    }

    if (Aja < Ra)
    {
        if (Aja < Sa)
        {
            printf("Ajay is the youngest");
        }
    }
    return 0;
}