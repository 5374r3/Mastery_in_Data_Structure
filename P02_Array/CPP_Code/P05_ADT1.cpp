#include <iostream>
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
int main() {
    Array arr={{1,2,3,4,4},20,5};
    Display(arr);
    return 0;
}

// ~Array arr={{1,2,3,4,5},20,5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array