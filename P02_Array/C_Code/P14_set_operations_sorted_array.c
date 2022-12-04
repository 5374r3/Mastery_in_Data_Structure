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
struct Array *UnionOperation(struct Array *arr1, struct Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array *));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];

        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];

        else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];
    while (j < arr2->length)
        arr3->A[k++] = arr2->A[j++];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
struct Array *IntersectionOperation(struct Array *arr1, struct Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array *));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            i++;

        else if (arr2->A[j] < arr1->A[i])
            j++;

        else if (arr1->A[i] == arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *DifferenceOperation(struct Array *arr1, struct Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array *));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];

        else if (arr2->A[j] < arr1->A[i])
            j++;

        else if (arr1->A[i] == arr2->A[j]) {
            i++;
            j++;
        }
    }
    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main() {
    struct Array arr1 = {{1, 3, 5, 7, 8}, 10, 5};
    struct Array arr2 = {{2, 3, 5, 8, 10}, 10, 5};
    struct Array *arr3,*arr6,*arr5;
    Display(arr1);
    Display(arr2);
    arr3 = UnionOperation(&arr1, &arr2);// AuB
    Display(*arr3);
    free(arr3);// it will clean the memory which return from UnionOperation 
    // fuction
    arr6 = IntersectionOperation(&arr1, &arr2);//AnB
    Display(*arr6);
    free(arr6);
    arr5 = DifferenceOperation(&arr1,&arr2);//A-B
    Display(*arr5);
    free(arr5);
    return 0;
}