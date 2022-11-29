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
int Get(struct Array arr, int index) {
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void Set(struct Array *arr, int index, int x) {
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}
int Sum(struct Array arr) {
    int total = 0;
    for (int i = 0; i < arr.length; i++)
        total = total + arr.A[i];
    return total;
}
float Avg(struct Array arr) {
    // float total = Sum(arr);
    // return total / arr.length;
    return (float)Sum(arr)/arr.length;
}
int Max(struct Array arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int main() {
    struct Array arr = {{8, 2, 9, 4, 5}, 20, 5};
    Display(arr);
    printf("%d\n", Get(arr, 4));
    Set(&arr, 4, 23);
    Display(arr);
    printf("%d\n", Sum(arr));
    printf("%f\n", Avg(arr));
    printf("%d\n", Max(arr));
    printf("%d\n", Min(arr));
    return 0;
}

//  struct Array arr={{1,2,3,4,5}, 20, 5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array