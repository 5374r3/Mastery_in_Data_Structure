//structure
#include <iostream>
using namespace std;

/*
// declare structure varible

struct Rectangle {
    int length;
    int breadth;
} r1, r2, r3;  // declaration of structure

struct Rectangle r1, r2, r2;  // declaration of structure

int main() {
    struct Rectangle r1, r2, r2;  // declaration of structure

    return 0;
}
*/

/* struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r1 = {10, 5};
    printf("%lu\n", sizeof(r1));
    r1.length = 10;
    r1.breadth = 20;
    // lu long unsigned //%d will give warning
    cout << sizeof(r1) << endl;
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
} */

// important "memory padding in structures"

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main() {
    struct Rectangle r1 = {10, 5};
    struct Rectangle *r2;
    
    cout << sizeof(r1) << endl;
    cout << sizeof(r2) << endl;

    return 0;
}
// total memory will take 12
// 4+4+4 = 12
// char take one byte
// int take four byte
// so memory will take on the basic of high order of data type
// in case of char it is like this and it take four byte but in memory only one byte will used
// why this happen because cpu at one cyle it take 4 byte in 32 bit architecture while in 64 bit it will take 8 byte but char has one byte
