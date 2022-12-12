#include <stdio.h>
#include <stdlib.h>

int N = 10;

int **fall() {
    int **a;
    a = (int *)malloc(N*sizeof(int*));
    int i;
    for (i = 0; i < N; i++) {
        *a[i] = i;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int **temp = fall();
    // printf("bendirinn: %p\ninniheldur [", temp);

    // for (int i = 0; i<10; i++) {
    //     printf("%d", temp[i]);
    //     if (i < 9) printf(",");
    // }
    // printf("]");
    free(*temp);
    return 0;
}
