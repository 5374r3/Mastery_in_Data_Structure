#include<stdio.h>
int main() {
    // it is good practicle to intilize with 0
    int length = 0, breadth = 0;
    scanf("%d %d",&length,&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("area=%d\nperimeter=%d\n", area, perimeter);
    return 0;
}


// input
// 10
// 20