#include <stdio.h>
#include<stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // e.g1
    // c compiler
    // struct Rectangle r1 = {10, 5};
    // c++ compiler
    struct Rectangle r1 = {10, 5};
    struct Rectangle *p = &r1;
    printf("%d\n",p->length);
    printf("%d\n",p->breadth);

    //e.g2 c
    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    ptr->length=20;
    ptr->breadth=30;
    printf("%d\n",ptr->length);
    // printf("%d\n",(*ptr).length); // another form to write
    printf("%d\n",ptr->breadth);

    return 0;
}