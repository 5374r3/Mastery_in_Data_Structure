#include <iostream>
using namespace std;
int main() {
    // it is good practicle to intilize with 0
    int length = 0, breadth = 0;
    cin >> length >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("area=%d\nperimeter=%d\n", area, perimeter);
    return 0;
}
