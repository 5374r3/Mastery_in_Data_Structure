#include <iostream>
using namespace std;
// ** array alaways pass by address never by value
void fun(int a[], int n) {
    // int k = sizeof(a) / sizeof(a[0]);// it will give 8/4=2 , 64bit arch 8 byte pointer and int 4byte
    // cout << k << endl;
    // for(int x: a)
    // cout<<x<<" ";
    // we cannot use foreach loop because 'a' is pointer
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void fun1(int *a, int n) {
  
    a[0] = 20;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    //e.g1
    cout<<"e.g1"<<endl;
    fun(arr, n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    //e.g2
    cout<<"e.g2"<<endl;
    fun1(arr,n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}