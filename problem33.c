#include <stdio.h>

int main()
{
    int otpay;
    int hrs;
    int othrs;
    int i = 0;

    while (++i <= 10)
    {
        printf("Input the working hours\n");
        scanf("%d", &hrs);

        if (hrs >= 40)
        {
            othrs = hrs - 40;
            otpay = othrs * 12;

            printf("The overtime pay is %d\n", otpay);
        }
        else
        {
            otpay = 0;
            printf("The overtime pay is 0\n");
        }
    }

    return 0;
}