#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 2;
    p[1] = 3;
    p[2] = 4;
    p[3] = 5;
    p[4] = 6;

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    q = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}