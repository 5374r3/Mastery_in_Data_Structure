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
    Array arr = {{2, 4, 8, 1, 5}, 20, 5};
    cout<<Delete(&arr,3)<<endl;
    Display(arr);
    return 0;
}

// ~Array arr={{2, 4, 8, 1, 5},20,5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array