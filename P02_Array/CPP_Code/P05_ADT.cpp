#include <iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
void Display(Array arr) {
    for (int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<" ";
    cout<<endl;
}
int main() {
    Array arr;
    int n;
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>arr.A[i];

    arr.length = n;
    Display(arr);
    delete [] arr.A;
    arr.A=NULL;
    return 0;
}

// 10 array size
// 5 array length
// array element
// 10
// 14
// 11
// 12
// 14