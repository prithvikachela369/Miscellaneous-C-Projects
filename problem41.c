#include <stdio.h>

int main()
{
    int num, i, bgNum, smNum, range, flag;

    flag = 0;

    bgNum = smNum = 0;

    printf("How many numbers are there in the set?\n");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("Input the number\n");
        scanf("%d", &i);

        if (flag == 0)
        {
            bgNum = smNum = i;
            flag = 1;
        }
        else
        {
            if (i > bgNum)
            {
                bgNum = i;
            }
            if (i < smNum)
            {
                smNum = i;
            }
        }

        num--;
    }

    if (smNum < 0)
    {
        range = smNum + bgNum;
    }
    else
    {
        range = bgNum - smNum;
    }

    if (range < 0)
    {
        range = range * -1;
    }

    printf("The range of the number set is %d\n", range);

    return 0;
}