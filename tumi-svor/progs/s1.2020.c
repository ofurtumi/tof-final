#include <stdio.h>
#include <stdlib.h>

// ? örlítið breytt function frá GeeksForGeeks
// * Notkun:    bin(n, size)
// * Fyrir:     n er heiltala >= 0
// *            size er stærð heiltölunar í bitum
// * Gildi:     prentar út tvíundargildi n fyrir gefna stærð
// ! ath.       size verður að passa við gagnatýpu á n til að fá rétta útkomu
void bin(unsigned n, unsigned size)
{
    unsigned i;
    for (i = 1 << (size - 1); i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

// ! breytti úr int í char til að fá lesanlegri útkomu
char hmm(unsigned char n) {
    return (~n) & (~n << 1);
}

char hmmm(unsigned char n) {
    return (~n) & (~n << 1) & (~n << 2);
}

char mmh(unsigned char n) {
    return n & (n << 1);
}

int main(int argc, char const *argv[])
{
    unsigned char n = 146;
    if (argc > 1) {n = atoi(argv[1]);};

    printf("gildi n er:  %u: \n", n);
    printf("sem er líka: ");
    bin(n, 8);

    char output1 = hmm(n);
    char output2 = hmmm(n);
    char output3 = mmh(n);
    printf("\nhefur  00?   %s", output1 ? "já" : "nei");
    printf("\nhefur 000?   %s", output2 ? "já" : "nei");
    printf("\nhefur  11?   %s", output3 ? "já" : "nei");

    return 0;
}
