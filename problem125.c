#include <stdio.h>
int main()
{
    int a, b, cp, u, v, w, x, revdig;
    float r, y, si, fr, cel;
    printf("Input the first number\n");
    scanf("%d", &a);
    printf("Input the second number\n");
    scanf("%d", &b);
    cp = a + b;
    printf("The output:- %d\n", cp);
    printf("Input the Principle , Rate, Years\n");
    scanf("%d %f %f", &cp, &r, &y);
    si = (cp * r * y) / 100;
    printf("The simple interest is: %f\n", si);
    printf("Enter the temprature in Fahrenheit\n");
    scanf("%f", &fr);
    cel = ((fr - 32) * 5) / 9;
    printf("In Celsius its %f\n", cel);
    printf("Input a 4 digit number\n");
    scanf("%d", &a);
    u = a / 1000;
    a = a - (u * 1000);
    v = a / 100;
    a = a - (v * 100);
    x = a / 10;
    a = a - (x * 10);
    w = a;
    revdig = (w * 1000) + (x * 100) + (v * 10) + (u); // exception w
    printf("The reverse digit is %d", revdig);
    return 0;
}