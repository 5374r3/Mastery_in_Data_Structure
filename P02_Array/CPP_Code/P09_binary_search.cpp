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

// iterative method
int BinarySearch(Array arr, int key) {
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

int BinarySearchRec(Array arr, int l, int h, int key) {
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
    // Array arr = {{1, 2, 4, 6, 8}, 20, 5};//in binary search array must be sorted order
    Array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21}, 20, 20};
    cout << BinarySearch(arr, 13) << endl;
    Display(arr);
    cout << BinarySearchRec(arr, 0, arr.length - 1, 21) << endl;
    Display(arr);
    return 0;
}

// ~Array arr={{1, 2, 4, 6, 8}, 20, 5};
// {1, 2, 4, 6, 8} element of array
// 20 size of array
// 5 length of array