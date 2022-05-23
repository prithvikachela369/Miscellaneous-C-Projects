#include <stdio.h>
int main()
{
    struct address
    {
        char phone[30];
        char city[30];
        int pin;
    };
    struct emp
    {
        char name[90];
        struct address a;
    };
    struct emp e = {"Jim kirk", "9898874757", "York town", 15};
    printf("%s\t%s\n", e.name, e.a.phone);
    printf("%s\t%d\n", e.a.city, e.a.pin);
    return 0;
}