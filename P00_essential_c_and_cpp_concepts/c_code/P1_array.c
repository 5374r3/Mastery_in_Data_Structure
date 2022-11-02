// Array
#include <stdio.h>
int main() {
    // e.g1
    int arr1[5];
    arr1[0] = 10;
    arr1[1] = 12;
    arr1[2] = 13;

    printf("%lu\n", sizeof(arr1));
    printf("%d ", arr1[1]);
    printf("%d\n", arr1[2]);

    // e.g2
    int arr2[10] = {2, 4, 10, 13, 14};
    printf("%lu ", sizeof(arr2));
    printf("%d ", arr2[4]);
    printf("%d\n", arr2[9]);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // e.g3
    int n;
    scanf("%d", &n);
    int arr3[n];
    arr3[0] = 10;
    for (int x = 0; x < n; x++) {
        printf("%d ", arr3[x]);
    }
    printf("\n");

    return 0;
}