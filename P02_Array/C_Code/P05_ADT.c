#include <stdio.h>
#include <stdlib.h>
struct Array {
    int *A;
    int size;
    int length;
};
void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}
int main() {
    struct Array arr;
    int n;
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);

    arr.length = n;
    Display(arr);
    free(arr.A);
    arr.A=NULL;
    return 0;
}


// 10 array size
// 5 array length
// array element
// 10
// 14
// 11
// 12
// 14