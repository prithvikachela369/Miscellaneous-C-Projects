#include <stdio.h>
struct parts
{
    char ser_num[4];
    int y_of_mf;
    char material[100];
    int quantity;
};
struct parts p[50];
void set_parts_data_AA0_to_BB4();
void get_parts_data_AA5_to_BB4();
int main()
{
    printf("Set the Data for all the Parts\n");
    printf("\n\n");
    printf("--------------------------------\n\n");
    set_parts_data_AA0_to_BB4();
    printf("\n\n");
    printf("Generating the Data for parts from AA5 to BB5.....\n");
    printf("--------------------------------\n\n");
    get_parts_data_AA5_to_BB4();
    return 0;
}
void set_parts_data_AA0_to_BB4()
{
    int i;
    for (i = 0; i < 15; i++)
    {
        printf("Input the Part Serial Number\n");
        scanf("%s", &p[i].ser_num);
        fflush(stdin);
        printf("Input the Year of Manufacturing\n");
        scanf("%d", &p[i].y_of_mf);
        fflush(stdin);
        printf("Input the Material\n");
        scanf("%s", &p[i].material);
        fflush(stdin);
        printf("Input the Part Quantity\n");
        scanf("%d", &p[i].quantity);
        fflush(stdin);
    }
}
void get_parts_data_AA5_to_BB4()
{
    int i;
    for (i = 5; i <= 14; i++)
    {
        printf("Serial Number: %s\n\n", p[i].ser_num);
        printf("Year of Manufacturing: %d\n\n", p[i].y_of_mf);
        printf("Material: %s\n\n", p[i].material);
        printf("Part Quantity: %d\n\n", p[i].quantity);
    }
}