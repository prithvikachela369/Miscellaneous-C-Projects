#include <stdio.h>
#define Pi 3
// #define TEST 5
// int main()
// {
// #if TEST <= 5
//     printf("Hi");
// #else
//     printf("Bhak!!");
// #endif
//     return 0;
// }
int main()
{
#ifndef Pi
    printf("Hi");
#else
    printf("Bhak");
#endif
    return 0;
}
