#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // e.g0
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    // ** note size of pointer independent on data type its depend on the archecture of machine in 64 bit 8 byte in 32 bit 4 byte

    // e.g1
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;

    // e.g2
    int arr[5] = {2, 4, 5, 6, 1};
    int *ptr;
    ptr = arr;  // ptr = &arr[0]
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // e.g3
    int *ptr2;
    // c syntax
    ptr2 = (int *)malloc(5 * sizeof(int));
    ptr2[0] = 10;
    ptr2[1] = 23;
    ptr2[2] = 24;
    ptr2[3] = 29;
    ptr2[4] = 13;
    for (int i = 0; i < 5; i++) {
        // printf("%d ",*(ptr2+i));
        printf("%d ", ptr2[i]);
    }
    free(ptr2);  // deallocate memory
    printf("\n");

    // e.g4
    int *ptr3;
    // c++ syntax
    ptr3 = new int[5];
    ptr3[0] = 20;
    ptr3[1] = 43;
    ptr3[2] = 54;
    ptr3[3] = 29;
    ptr3[4] = 53;
    for (int i = 0; i < 5; i++) {
        // cout << *(ptr3 + i) << " ";
        cout << ptr3[i] << " ";
    }
    delete[] ptr3;  // deallocate memory
    cout << endl;
}