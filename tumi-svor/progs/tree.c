#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    if (argc > 1) n = atoi(argv[1]);

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        printf("%*s", n-i,"");
        for (int j = 0; j < i*2+1; j++) {
            if (j % 2 == 0) {
                printf("%d", cnt++);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
