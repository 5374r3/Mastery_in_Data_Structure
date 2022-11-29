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

void Reverse(struct Array *arr) {
    int *B;
    B = (int *)malloc(arr->length * sizeof(int));
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (int i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
    free(B);
}
void Reverse2(struct Array *arr) {
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}
void LeftShift(struct Array *arr) {
    int temp = arr->A[0];
    for (int i = 0; i < arr->length; i++)
        arr->A[i] = arr->A[i + 1];
    arr->A[arr->length - 1] = temp;
}

int main() {
    struct Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    Display(arr);
    // Reverse(&arr);
    Reverse2(&arr);
    Display(arr);
    LeftShift(&arr);
    Display(arr);
    // LeftShift(&arr);
    // Display(arr);
    // LeftShift(&arr);
    // Display(arr);
    // LeftShift(&arr);
    // Display(arr);

    return 0;
}

//  struct Array arr={{2, 4, 8, 1, 5},20,5};
// {2, 4, 8, 1, 5} element of array
// 20 size of array
// 5 length of array