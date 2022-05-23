#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f;
    char ch;
    f = fopen("Test.txt", "r+");
    if (f == NULL)
    {
        printf("Error: Cannot open test file\n");
    }
    else
    {
        while ((ch = fgetc(f)) != EOF)
        {
            if (ch == 'B')
            {
                fseek(f, -1, SEEK_CUR);
                fputc('H', f);
                fseek(f, 0, SEEK_CUR);
            }
        }
        fclose(f);
    }
    return 0;
}