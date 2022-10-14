#include <iostream>
using namespace std;
int main() {
    // e.g1
    int arr1[5];
    arr1[0] = 10;
    arr1[1] = 12;
    arr1[2] = 13;

    cout << sizeof(arr1) << endl;
    cout << arr1[1] << endl;
    printf("%d\n", arr1[2]);

    // e.g2
    int arr2[10] = {2, 4, 10, 13, 14};
    cout << sizeof(arr2) << endl;
    cout << arr2[9] << endl;
    printf("%d\n", arr1[5]);
    printf("%d\n", arr1[9]);
    
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    //foreach loop
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;

    for (int x : arr2) {
        printf("%d ", x);
    }
    printf("\n");

    // e.g3
    int n;
    cin >> n;
    int arr3[n];
    arr3[0] = 10;
    for (int x : arr3) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}