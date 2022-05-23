#include <stdio.h>

int main()
{
    int cls, fsub;

    printf("Input the class\n");
    scanf("%d", &cls);

    printf("Input the number of subjects you failed\n");
    scanf("%d", &fsub);

    switch (cls)
    {
    case 1:
        if (fsub > 3)
        {
            printf("No grace\n");
            break;
        }
        else if (fsub < 3)
        {
            printf("5 marks grace per subject\n");
            break;
        }

    case 2:
        if (fsub > 2)
        {
            printf("No grace\n");
            break;
        }
        else if (fsub < 2)
        {
            printf("4 marks grace per subject\n");
            break;
        }

    case 3:
        if (fsub >= 1)
        {
            printf("No grace\n");
            break;
        }
        else if (fsub == 0)
        {
            printf("5 marks grace per subject\n");
            break;
        }
    }
    return 0;
}