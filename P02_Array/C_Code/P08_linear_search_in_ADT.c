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
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

//trnasposition
int LinearSearch1(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

//move to front/head
int LinearSearch2(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main() {
    struct Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    printf("%d\n", LinearSearch(arr, 15));
    Display(arr);
    printf("%d\n", LinearSearch1(&arr, 5));//if we call mutiple times item reach to head
    Display(arr);
    printf("%d\n", LinearSearch2(&arr, 5));//if we call it 2nd times item reach to head
    Display(arr);
    return 0;
}

//  struct Array arr={{2, 4, 8, 1, 5},20,5};
// {2, 4, 8, 1, 5} element of array
// 20 size of array
// 5 length of array