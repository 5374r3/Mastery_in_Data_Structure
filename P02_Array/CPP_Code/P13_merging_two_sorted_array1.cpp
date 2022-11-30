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
struct Array *Merge(Array *arr1, struct Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    // struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array *));

    Array *arr3 = new Array[sizeof(Array *)];
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];
    while (j < arr2->length)
        arr3->A[k++] = arr2->A[j++];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

int main() {
    struct Array arr1 = {{1, 3, 5, 7, 9}, 10, 5};
    struct Array arr2 = {{2, 4, 6, 8, 10}, 10, 5};
    struct Array *arr3;
    Display(arr1);
    Display(arr2);
    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);
    return 0;
}