#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("PR1.txt.txt", "r");
    if (fs == NULL)
    {
        printf("Cannot open Source file\n");
        fclose(fs);
        exit(1);
    }
    else
    {
        ft = fopen("PR2.txt.txt", "w");
        if (ft == NULL)
        {
            printf("Error, Cannot open target file\n");
            fclose(fs);
            fclose(ft);
            exit(2);
        }
        else
        {
            while (1)
            {
                ch = fgetc(fs);
                if (ch == EOF)
                {
                    break;
                }
                else
                {
                    fputc(ch, ft);
                }
            }

            fclose(fs);
            fclose(ft);
        }
    }
    return 0;
}