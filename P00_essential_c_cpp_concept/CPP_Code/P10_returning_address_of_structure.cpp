#include <iostream>
using namespace std;

struct Rectangle {
    int length, breadth;
};

struct Rectangle *fun() {
    struct Rectangle *p;
    //c syntax
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // c++ syntax
    p = new Rectangle;
    p->length = 10;
    p->breadth = 20;
    return p;
}
int main() {
    struct Rectangle *ptr = fun();
    cout<<"length= "<<ptr->length<<endl<<"breath= "<<ptr->breadth<<endl;
    return 0;
}