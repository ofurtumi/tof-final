#include <stdio.h>

int main(int argc, char const *argv[])
{
    long a = 7;
    long b = 8;
    long c = 9;

    printf("7 & 7 = %ld\n", a & a);
    printf("7 & 8 = %ld\n", a & b);
    printf("7 & 9 = %ld\n", a & c);
    return 0;
}
