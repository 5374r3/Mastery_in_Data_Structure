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

int Delete(struct Array *arr, int index) {
    int x=0;
    if (index >= 0 && index <= arr->length - 1) {
        x=arr->A[index];
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main() {
    struct Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    printf("%d\n",Delete(&arr, 0));
    Display(arr);
    return 0;
}

//  struct Array arr={{2, 4, 8, 1, 5},20,5};
// {2, 4, 8, 1, 5} element of array
// 20 size of array
// 5 length of array