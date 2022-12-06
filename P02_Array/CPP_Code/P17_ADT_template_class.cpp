#include <iostream>
using namespace std;

template<class T>

class Array {
   private:
    // int *A;
    T *A;
    int size;
    int length;

   public:
    Array() {
        size = 3;
        // A = new int[size];
        A = new T[size];
        length = 0;
    }
    Array(int sz) {
        size = sz;
        // A = new int[sz];
        A = new T[sz];
        length = 0;
    }
    ~Array() {
        delete[] A;
    }
    void Display();
    // void Insert(int index, int x);
    void Insert(int index, T x);
    // int Delete(int index);
    T Delete(int index);
};
template <class T>
// void Array::Display() {

void Array<T>::Display() {
    for (int i = 0; i < length; i++)
        cout << A[i] << " ";
    cout << endl;
}
template <class T>
// void Array::Insert(int index, int x) {

void Array<T>::Insert(int index, T x) {
    if (index >= 0 && index <= length) {
        for (int i = length - 1; i >= index; i--)
            A[i + 1] = A[i];

        A[index] = x;
        length++;
    }
}
template <class T>
// int Array::Delete(int index) {

T Array<T>::Delete(int index) {
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
   

    // // paramatise  costructor
    // Array<int> arr(4);
    // arr.Insert(0,2);
    // arr.Insert(1,4);
    // arr.Insert(2,7);
    // arr.Insert(3,8);
    // arr.Insert(4,9);
    // arr.Display();
    // arr.Delete(1);
    // arr.Display();



    // Array<float> arr(4);
    // arr.Insert(0,0.2);
    // arr.Insert(1,4.5);
    // arr.Insert(2,7.2);
    // arr.Insert(3,8.55);
    // arr.Insert(4,9.333);
    // arr.Display();
    // arr.Delete(1);
    // arr.Display();


    Array<char> arr(4);
    arr.Insert(0,'C');
    arr.Insert(1,'x');
    arr.Insert(2,'Z');
    arr.Insert(3,'m');
    arr.Insert(4,'l');
    arr.Display();
    arr.Delete(1);
    arr.Display();
    return 0;
}