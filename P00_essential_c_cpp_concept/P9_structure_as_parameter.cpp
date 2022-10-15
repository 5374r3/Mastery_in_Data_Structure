#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
//call by address
void fun1(struct Rectangle *rect) {
    rect->length =20;
    cout<<"length = "<<rect->length<<endl<<"breadth = "<<rect->breadth<<endl;
}

// call by value
void fun(struct Rectangle rect) {
    rect.length =20;
    cout<<"length = "<<rect.length<<endl<<"breadth = "<<rect.breadth<<endl;
}

int main() {
    //e.g1
    cout<<"e.g1"<<endl;
    struct Rectangle r1 = {10,5};
    fun(r1);
    printf("Length = %d \nBreath = %d\n",r1.length,r1.breadth);

    //e.g2
    cout<<"e.g2"<<endl;
    struct Rectangle r2 = {15,12};
    fun1(&r2);
    printf("Length = %d \nBreath = %d",r2.length,r2.breadth);
    return 0;
}