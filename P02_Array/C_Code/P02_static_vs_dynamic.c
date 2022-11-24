#include <stdio.h>
#include <stdlib.h>
int main() {
    int A[5] = {1, 2, 3, 4, 5};
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 4;
    p[2] = 5;
    p[3] = 6;
    p[4] = 7;

    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}