#define MEAN(x, y) (x + y / 2)
#define ABSVAL(x) (x < 0 ? x * -x : x)
#define UPTOLOW(x) (x + 32)
#define BIG(x, y, z) (x > y && x > z ? x : y > x && y > z ? y
                                                          : z)