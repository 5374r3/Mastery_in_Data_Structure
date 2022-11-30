#include <stdio.h>
#include <stdlib.h>
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// insert an element in sorted position
void InsetedInSorted(struct Array *arr, int x) {
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

// is array sorted or not
int CheckSort(struct Array arr) {
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

// rearranging +ve and -ve number
void RearangPlusNegative(struct Array *arr) {
    int i = 0;
    int j = arr->length - 1;
    while (i < j) {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}
int main() {
    struct Array arr = {{1, 2, 5, 7, 8}, 20, 5};
    InsetedInSorted(&arr, 0);
    printf("%d\n", CheckSort(arr));
    Display(arr);
    struct Array arr1 = {{1, -3, 2, -2, -1, 5, -6, 7, -9, 8}, 20, 10};
    Display(arr1);
    RearangPlusNegative(&arr1);
    Display(arr1);

    return 0;
}
