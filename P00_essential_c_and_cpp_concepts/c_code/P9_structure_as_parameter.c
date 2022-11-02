#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
//call by address
void fun1(struct Rectangle *rect) {
    rect->length =20;
    printf("length = %d\nbreadth = %d\n",rect->length,rect->breadth);
}

// call by value
void fun(struct Rectangle rect1) {
    rect1.length =20;
    printf("length = %d\nbreadth = %d\n",rect1.length,rect1.breadth);
}

int main() {
    //e.g1
    printf("e.g1\n");
    struct Rectangle r1 = {10,5};
    fun(r1);
    printf("Length = %d\nBreath = %d\n",r1.length,r1.breadth);

    //e.g2
    printf("\ne.g2\n");
    struct Rectangle r2 = {15,12};
    fun1(&r2);
    printf("Length = %d\nBreath = %d",r2.length,r2.breadth);
    return 0;
}