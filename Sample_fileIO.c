#include <stdio.h>
int main()
{
    FILE *f, *f1;
    char ch;

    f = fopen("PR1.txt.txt", "r");
    f1 = fopen("PR1_copy.txt.txt", "w");

    while (1)
    {
        ch = fgetc(f);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch, f1);
        }
    }
    fclose(f);
    fclose(f1);
    return 0;
}