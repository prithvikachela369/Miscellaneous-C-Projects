#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char s[80];
    fp = fopen("Data.txt.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot open the file.\n");
        exit(1);
    }
    else
    {
        // writing the file
        printf("Enter a few lines of text\n");
        while (strlen(gets(s)) > 0)
        {
            fputs(s, fp);
            fputs("\n", fp);
        }
        fclose(fp);

        // now reading the file
        printf("File contents are now being read.\n");
        fp = fopen("Data.txt.txt", "r");
        if (fp == NULL)
        {
            printf("Cannot open the file.\n");
            exit(2);
        }
        else
        {
            while (fgets(s, sizeof(s), fp) != NULL) // fgets because to prevent the overflowing of the array size
            {
                printf("%s", s);
            }
            fclose(fp);
        }
    }
    return 0;
}