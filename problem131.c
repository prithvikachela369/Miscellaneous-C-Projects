#include <stdio.h>
struct player
{
    char name[10];
    int age;
    int num_test_matches;
    int avg_score;
};
struct player p[20];
void set_player_data();
void get_player_data_qsort();
int main()
{
    printf("Enter the Player data\n\n");
    printf("-------------------------------\n\n");
    set_player_data();
    printf("--------------------------------\n\n");
    get_player_data_qsort();
    return 0;
}
void set_player_data()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Name\n");
        scanf("%s", &p[i].name);
        printf("Enter the Age\n");
        scanf("%d", &p[i].age);
        printf("Enter the Number of Test matches played\n");
        scanf("%d", &p[i].num_test_matches);
        printf("Enter the Average Score\n");
        scanf("%d", &p[i].avg_score);
    }
}
void get_player_data_qsort()
{
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (p[i].avg_score > p[j].avg_score)
            {
                temp = p[i].avg_score;
                p[i].avg_score = p[j].avg_score;
                p[j].avg_score = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i].avg_score);
    }
}
