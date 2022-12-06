#include <iostream>
using namespace std;
class Array {
   private:
    int *A;
    int size;
    int length;

   public:
    Array() {
        size = 3;
        A = new int[size];
        length = 0;
    }
    Array(int sz) {
        size = sz;
        A = new int[sz];
        length = 0;
    }
    ~Array() {
        delete[] A;
    }
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
};
void Array::Display() {
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
    cout << endl;
}
void Array::Insert(int index, int x) {
    if (index >= 0 && index <= length) {
        for (int i = length - 1; i >= index; i--)
            A[i + 1] = A[i];

        A[index] = x;
        length++;
    }
}
int Array::Delete(int index) {
    int x = 0;
    if (index >= 0 and index < length) {
        x = A[index];
        for (int i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
    }
    return x;
}
int main() {
    // Array arr[10];
    // arr->Insert(0,2);
    // arr->Insert(1,4);
    // arr->Insert(2,7);
    // arr->Display();

    // paramatise  costructor
    Array arr(4);
    arr.Insert(0,2);
    arr.Insert(1,4);
    arr.Insert(2,7);
    arr.Insert(3,8);
    arr.Insert(4,9);
    arr.Display();
    arr.Delete(1);
    arr.Display();


    //non parmatise constructor
    // Array *arr;
    // arr = new Array;
    // arr->Insert(0, 2);
    // arr->Insert(1, 3);
    // arr->Insert(2, 4);
    // arr->Insert(3, 5);
    // arr->Insert(4, 6);

    // arr->Insert(5, 8);
    // arr->Insert(6, 9);
    // arr->Insert(7,10);
    // arr->Display();
    return 0;
}