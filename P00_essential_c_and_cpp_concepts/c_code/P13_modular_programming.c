#include <stdio.h>

int area(int length, int breadth) {
    return length * breadth;
}

int peri(int length, int breadth) {
    return 2 * (length + breadth);
}

int main() {
    int length = 0, breadth = 0;
    scanf("%d %d", &length, &breadth);
    int ar = area(length, breadth);
    int perimeter = peri(length, breadth);
    printf("area=%d\nperimeter=%d\n", ar, perimeter);
    return 0;
}

// input
// 10
// 20