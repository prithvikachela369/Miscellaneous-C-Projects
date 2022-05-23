#include <stdio.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[40];
        int age;
    };
    int i;
    struct emp e;
    // fp = fopen("EMP.txt", "w");
    // for (i = 0; i <= 2; i++)
    // {
    //     // writing the file
    //     printf("Enter the Employee Name\n");
    //     scanf("%s", &e.name[i]);
    //     printf("Enter the Employee Age\n");
    //     scanf("%d", &e.age);
    // }
    // fwrite(&e.name, sizeof(struct emp), 1, fp);
    // fputs("\t", fp);
    // fwrite(&e.age, sizeof(struct emp), 1, fp);
    // fputs("\n", fp);
    // fclose(fp);

    // // reading the file
    // printf("Reading the file...\n");
    // fp = fopen("EMP.txt", "r");
    // while (fread(&fp, sizeof(struct emp), 1, fp) != EOF)
    // {
    //     printf("%s %d\n", e.name, e.age);
    // }
    // fclose(fp);

    fp = fopen("EMP2.DAT", "wb");
    for (i = 0; i <= 2; i++)
    {
        // writing the file
        printf("Enter the Employee Name\n");
        scanf("%s", &e.name[i]);
        printf("Enter the Employee Age\n");
        scanf("%d", &e.age);
    }
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("EMP.DAT", "rb");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("%s %d\n", e.name, e.age);
    }
    return 0;
}