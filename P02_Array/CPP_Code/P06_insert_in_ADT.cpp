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
// insert at the end
void Append(Array *arr, int x) {
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
// insert at the index
void Insert(Array *arr, int index, int x) {
    if (index >= 0 && index < arr->length) {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int main() {
    Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    Append(&arr, 10);
    // Insert(&arr, 3, 55);
    Insert(&arr, 0, 55);
    Display(arr);
    return 0;
}

// ~Array arr={{2, 4, 8, 1, 5},20,5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array