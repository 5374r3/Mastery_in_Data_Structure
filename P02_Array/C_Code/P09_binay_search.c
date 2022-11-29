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
// iterative version
int BinarySearch(struct Array arr, int key) {
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    while (l <= h) {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

// recursive method

int BinarySearchRec(struct Array arr, int l, int h, int key) {
    int mid;
    if (l <= h) {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            return BinarySearchRec(arr, l, mid - 1, key);
        else
            return BinarySearchRec(arr, mid + 1, h, key);
    }
    return -1;
}

int main() {
    struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};  // in binary search array must be sorted order
    printf("%d\n", BinarySearch(arr, 5));
    Display(arr);
    printf("%d\n", BinarySearchRec(arr, 0, arr.length - 1, 5));
    Display(arr);
    return 0;
}

//  struct Array arr={{1,2,3,4,5}, 20, 5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array