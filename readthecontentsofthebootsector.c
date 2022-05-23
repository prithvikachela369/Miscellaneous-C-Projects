#pragma pack(1)
struct emp
{
    int a;
    char ch;
    float s;
};
#pragma pack()
struct emp e;
printf("%u\t%u\t%u\n", &e.a, &e.ch, &e.s);