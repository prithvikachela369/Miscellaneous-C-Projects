#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch[100];
    fp = fopen("PR1.txt.txt", "r");
    printf("%s", fgets(ch, 50, fp));
    fclose(fp);
    return 0;
}