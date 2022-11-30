#include <iostream>
using namespace std;
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(Array arr) {
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// insert an element in sorted position
void InsetedInSorted(Array *arr, int x) {
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
int CheckSort(Array arr) {
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

// rearranging +ve and -ve number
void RearangPlusNegative(Array *arr) {
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
    struct Array arr = {{1, 2, 4, 5, 8}, 20, 5};
    Display(arr);
    InsetedInSorted(&arr, 3);
    Display(arr);
    cout << CheckSort(arr) << endl;

    struct Array arr1 = {{4, -3, 2, -2, -1, 5, -6, 7, -9, 8}, 20, 10};
    Display(arr1);
    RearangPlusNegative(&arr1);
    Display(arr1);

    return 0;
}
