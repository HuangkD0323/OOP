#include <stdio.h>

/*DATE��һ��union, �������ÿռ�.�������ı���������int[5], ռ��20���ֽ�.�������Ĵ�С��20*/
typedef union {
    long i;
    int k[5];
    char c;
} DATE;

/*data ��һ��struct, ÿ�������ֿ�ռ�ÿռ�.����Ϊint4 +DATE20 + double8 = 32.*/
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