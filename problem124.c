#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;

    char *single_digits[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    char *double_digits[] = {"", "ten", "eleven", " twelve ",
                             "thirteen",
                             "fourteen", "fifteen", "sixteen",
                             "seventeen", "eighteen", "nineteen"};

    char *tens_multiple[] = {"", "", "twenty",
                             "thirty", "forty", "fifty",
                             "sixty", "seventy", "eighty",
                             "ninety"};

    char *tens_power[] = {"hundred", "thousand"};

    printf("Input the number(less than or equal to 4 digits)\n");
    scanf("%d", &num);

    if (num > 9999)
    {
        printf("Input the number with less than  or equal to 4 digits\n");
    }

    if (num <= 9)
    {
        printf("%s\n", single_digits[num - 0]);
    }
    if (num >= 1000 && num <= 9999)
    {
        if (num == 1000)
        {
            printf("%s %s", single_digits[1], tens_power[1]);
            exit(0);
        }
        printf("%s %s %s %s %s %s", single_digits[num / 1000], tens_power[1], single_digits[(num - ((num / 1000) * 1000)) / 100], tens_power[0], tens_multiple[((num - ((num / 1000) * 1000)) - (((num - ((num / 1000) * 1000)) / 100) * 100)) / 10], single_digits[num - (((num / 1000) * 1000) + (((num - ((num / 1000) * 1000)) / 100) * 100) + ((((num - ((num / 1000) * 1000)) - ((num - ((num / 1000) * 1000)) / 100) * 100) / 10) * 10))]);
    }

    if (num >= 100 && num <= 999)
    {
        if (num == 100)
        {
            printf("%s %s", single_digits[1], tens_power[0]);
            exit(0);
        }
        printf("%s %s %s %s", single_digits[num / 100],
               tens_power[0], tens_multiple[(num - ((num / 100) * 100)) / 10], single_digits[(num - (((num / 100) * 100) + (((num - ((num / 100)) * 100)) / 10) * 10))]);
    }

    if (num > 20 && num < 100)
    {
        printf("%s %s", tens_multiple[num / 10], single_digits[num - ((num / 10) * 10)]);
    }

    if (num == 20)
    {
        printf("%s", tens_multiple[2]);
        exit(0);
    }

    if (num >= 10 && num <= 19)
    {
        printf("%s", double_digits[num - 9]);
        exit(0);
    }

    return 0;
}