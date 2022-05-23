#include <stdio.h>
int main()
{
    int Maths, Science, SS, Computer, English, Gujarati, total;
    float per;
    printf("Marks in Maths\n");
    scanf("%d", &Maths);
    printf("Marks in Science\n");
    scanf("%d", &Science);
    printf("Marks in SS\n");
    scanf("%d", &SS);
    printf("Marks in Computer\n");
    scanf("%d", &Computer);
    printf("Marks in Gujarati\n");
    scanf("%d", &Gujarati);
    printf("Marks in English\n");
    scanf("%d", &English);

    total = Maths + Science + SS + Computer + English + Gujarati;
    printf("Total marks are %d\n", total);

    per = total / 6;
    printf("Total percentage is %f\n", per);

    return 0;
}