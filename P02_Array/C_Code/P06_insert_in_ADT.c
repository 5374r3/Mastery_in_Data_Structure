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
// insert at the end
void Append(struct Array *arr, int x) {
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
// insert at the index
void Insert(struct Array *arr, int index, int x) {
    if (index >= 0 && index < arr->length) {
        for (int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int main() {
    struct Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    // append array at the end
    Append(&arr, 10);
    // Insert(&arr, 0, 40);
    Insert(&arr, 2, 40);
    Display(arr);
    return 0;
}

//  struct Array arr={{2, 4, 8, 1, 5},20,5};
// {2, 4, 8, 1, 5} element of array
// 20 size of array
// 5 length of array