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
struct Array *Merge(struct Array *arr1, struct Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array *));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        } else {
            arr3->A[k] = arr2->A[j];
            k++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k]=arr1->A[i];
        k++;
    }
    for(;j<arr2->length;j++){
        arr3->A[k]=arr2->A[j];
        k++;
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}

int main() {
    struct Array arr1 = {{2, 4, 6, 8, 10}, 10, 5};
    struct Array arr2 = {{1, 3, 5, 7, 9}, 10, 5};
    struct Array *arr3;
    Display(arr1);
    Display(arr2);
    arr3 = Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}