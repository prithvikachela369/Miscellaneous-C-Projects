#include <stdio.h>
#include <stdlib.h>
struct ac_data
{
    int ac_num;
    char name[100];
    int ac_bal;
};

struct ac_data ac[50];
void set_ac_data();
void get_ac_data_below_hundred();
void ac_withdraw();
void ac_deposit();
int main()
{
    char ch;
    printf("Input the Customer Account Data\n");
    printf("\n");
    printf("--------------------------------");
    printf("\n");
    set_ac_data();
    printf("\n");
    printf("--------------------------------");
    printf("\n");
    printf("Generating data for customers with balance below 100.....\n");
    get_ac_data_below_hundred();
    printf("\n");
    printf("--------------------------------");
    printf("\n");
    printf("Do you want to Make a Deposit or Withdrawal(Y/N)\n");
    scanf("%c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
        int j;
        printf("Do you want to Make a Deposit or Withdrawal (0 for Withdrawal and 1 for Deposit)\n");
        scanf("%d", &j);
        if (j == 0)
        {
            ac_withdraw();
        }
        else if (j == 1)
        {
            ac_deposit();
        }
        else
        {
            printf("Invalid input\n");
            exit(0);
        }
    }
    else
    {
        exit(0);
    }
    return 0;
}
void set_ac_data()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Input the Account number\n");
        scanf("%d", &ac[i].ac_num);
        fflush(stdin);
        printf("Input the Customer name\n");
        scanf("%s", ac[i].name);
        fflush(stdin);
        printf("Input the Account balance\n");
        scanf("%d", &ac[i].ac_bal);
        fflush(stdin);
    }
}
void get_ac_data_below_hundred()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        if (ac[i].ac_bal < 100)
        {
            printf("%s\n", ac[i].name);
        }
    }
}
void ac_withdraw()
{
    int withdraw_amount, ac_num_in, i;
    printf("Input the Account number\n");
    scanf("%d", &ac_num_in);
    for (i = 0; i < 4; i++)
        if (ac_num_in == ac[i].ac_num)
        {
            printf("Input the Withdrawal amount\n");
            scanf("%d", &withdraw_amount);

            if (withdraw_amount > ac[i].ac_bal || ac[i].ac_bal < 100)
            {
                printf("Insufficient balance in the account or balance is less than 100\n");
                exit(0);
            }
            else
            {
                ac[i].ac_bal = ac[i].ac_bal - withdraw_amount;
                printf("%d Amount withdrawed from the account number %d\n", withdraw_amount, ac[i].ac_num);
            }
        }
        else
        {
            printf("No Account found\n");
        }
}
void ac_deposit()
{
    int dep_amount, i, ac_num_in;
    printf("Input the Account number\n");
    scanf("%d", &ac_num_in);
    for (i = 0; i < 4; i++)
        if (ac_num_in == ac[i].ac_num)
        {
            printf("Input the deposit amount\n");
            scanf("%d", &dep_amount);
            ac[i].ac_bal = ac[i].ac_bal + dep_amount;
            printf("%d Amount deposited to the account number %d\n", dep_amount, ac[i].ac_num);
        }
        else
        {
            printf("No Account found\n");
        }
}