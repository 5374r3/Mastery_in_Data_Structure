// Pointer
#include <stdio.h>
#include <stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // e.g0
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    printf("%lu\n", sizeof(p1));
    printf("%lu\n", sizeof(p2));
    printf("%lu\n", sizeof(p3));
    printf("%lu\n", sizeof(p4));
    printf("%lu\n", sizeof(p5));
    // ** note size of pointer independent on data type its depend on the archecture of machine in 64 bit 8 byte in 32 bit 4 byte

    // e.g1
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d\n", *p);

    // e.g2
    int arr[5] = {2, 4, 5, 6, 1};
    int *ptr;
    ptr = arr;  // ptr = &arr[0]
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // e.g3
    int *ptr2;
    // c syntax
    ptr2 = (int *)malloc(5 * sizeof(int));
    ptr2[0] = 10;
    ptr2[1] = 23;
    ptr2[2] = 24;
    ptr2[3] = 29;
    ptr2[4] = 13;
    for (int i = 0; i < 5; i++) {
        // printf("%d ",*(ptr2+i));
        printf("%d ", ptr2[i]);
    }
    free(ptr2);  // deallocate memory
    printf("\n");
}