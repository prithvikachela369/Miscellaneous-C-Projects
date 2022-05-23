#include <stdio.h>
void display1(int *, int);
int main()
{
    int num[] = {24, 26, 34, 2, 4};
    display1(&num[0], 5); // it passes the whole array to the function
    return 0;
}
void display1(int *j, int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", *j);
        j++; // Incrementation pointer to point to next element
    }
}