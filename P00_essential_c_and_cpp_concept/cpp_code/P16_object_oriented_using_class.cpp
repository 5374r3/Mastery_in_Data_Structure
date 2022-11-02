#include <iostream>
using namespace std;

class Rectangle {
   public:
    int length, breadth;

    void initilise(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }

    int peri() {
        return 2 * (length + breadth);
    }
};
int main() {
    Rectangle r;
    int len, bre;
    cin >> len >> bre;
    r.initilise(len, bre);
    int ar = r.area();
    int perimeter = r.peri();
    printf("area=%d\nperimeter=%d\n", ar, perimeter);
    return 0;
}
