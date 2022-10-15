#include <iostream>
using namespace std;

// pass/call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// call/pass by address
void swap1(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// call/pass by refernce
void swap2(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int add_fun(int a, int b) {
    return a + b;
}

int main() {
    // eg1 call/pass by value
    int num1 = 10, num2 = 20;
    cout << "before swapping" << endl;
    cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    swap(num1, num2);  // swaping not occur because actual value not swap here
    cout << "after swapping" << endl;
    cout << "num1 = " << num1 << " num2 = " << num2 << endl;

    // eg2 call/pass by address
    int a = 10, b = 20;
    cout << "before swapping" << endl;
    cout << "a = " << a << " b = " << b << endl;
    swap1(&a, &b);  // swaping done
    cout << "after swapping" << endl;
    cout << "a = " << a << " b = " << b << endl;

    // eg2 call/pass by reference
    int x = 10, y = 20;
    cout << "before swapping" << endl;
    cout << "x = " << x << " y = " << y << endl;
    swap2(x, y);  // swaping done
    cout << "after swapping" << endl;
    cout << "a = " << x << " y = " << y << endl;

    // call/pass by value another exampl
    int m = 10, n = 20, sum;
    sum = add_fun(m, n);
    cout << "sum=" << sum << endl;
}