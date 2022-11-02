#include <stdio.h>
#include<stdlib.h>

int *fun(int size) {
    int *p;
    p = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}

int main() {
    int *ptr, sz = 5;
    ptr = fun(sz);
    for (int i = 0; i < sz; i++)
        printf("%d ",ptr[i]);
    printf("\n");
    return 0;
}