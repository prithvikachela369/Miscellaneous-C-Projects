#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int nol = 0, not = 0, nos = 0, noc = 0;
    fp = fopen("PR1.txt.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        noc++;
        if (ch == ' ')
        {
            nos++;
        }
        if (ch == '\t')
        {
            not ++;
        }
        if (ch == '\n')
        {
            nol++;
        }
    }
    fclose(fp);
    printf("No of characters = %d\n", noc);
    printf("No of lines = %d\n", nol + 1);
    printf("No of Tabs = %d\n", not );
    printf("No of Spaces = %d\n", nos);
    return 0;
}