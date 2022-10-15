#include <iostream>
using namespace std;
int main() {
    // reference is a part of c++ it is not used in c
    int a = 10;
    int &r = a;
    // a and r both having 10 we can use two different varible to one item particle use in p8
    cout << a << endl;
    r++;
    cout << a << endl;
    int b = 30;
    r = b;
    cout << r << endl;
}