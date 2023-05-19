#include <stdio.h>

/*DATE是一个union, 变量公用空间.里面最大的变量类型是int[5], 占用20个字节.所以它的大小是20*/
typedef union {
    long i;
    int k[5];
    char c;
} DATE;

/*data 是一个struct, 每个变量分开占用空间.依次为int4 +DATE20 + double8 = 32.*/
struct data {
    int cat;
    DATE cow;
    double dog;
} too;

DATE max;

int main()
{
    printf("%lld", sizeof(struct data) + sizeof(max));
    return 0;
}