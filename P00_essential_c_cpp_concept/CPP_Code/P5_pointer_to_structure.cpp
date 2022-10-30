#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // e.g1
    // c compiler
    // struct Rectangle r1 = {10, 5};
    // c++ compiler
    Rectangle r1 = {10, 5};
    Rectangle *p = &r1;
    cout << p->length << endl;
    cout << p->breadth << endl;

    //e.g2 c
    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    ptr->length=20;
    ptr->breadth=30;
    printf("%d\n",ptr->length);
    // printf("%d\n",(*ptr).length); // another form to write
    printf("%d\n",ptr->breadth);

    //e.g3 cpp
    Rectangle *ptr1;
    ptr1 = new Rectangle;
    ptr1->length=24;
    ptr1->breadth=12;
    cout<<ptr1->length<<endl;
    cout<<ptr1->breadth<<endl;

     

    return 0;
}