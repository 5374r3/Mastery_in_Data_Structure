#include<iostream>
using namespace std;
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(Array arr) {
    for (int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<" ";
    cout<<endl;
}
int Get(Array arr, int index) {
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void Set(Array *arr, int index, int x) {
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}
int Sum(Array arr) {
    int total = 0;
    for (int i = 0; i < arr.length; i++)
        total = total + arr.A[i];
    return total;
}
float Avg(Array arr) {
    // float total = Sum(arr);
    // return total / arr.length;
    return (float)Sum(arr)/arr.length;
}
int Max(Array arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int Min(Array arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int main() {
    Array arr = {{8, 2, 1, 4, 5}, 20, 5};
    Display(arr);
    cout<<Get(arr, 4)<<endl;
    Set(&arr, 4, 23);
    Display(arr);
    cout<<Sum(arr)<<endl;
    cout<<Avg(arr)<<endl;
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl;
    return 0;
}

//  Array arr={{8, 2, 1, 4, 5}, 20, 5};
// {8, 2, 1, 4, 5} element of array
// 20 size of array
// 5 length of array