#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
    int length, breadth;
};

struct Rectangle *fun() {
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 20;
    return p;
}
int main() {
    struct Rectangle *ptr = fun();
    printf("length= %d\nbreath= %d\n",ptr->length,ptr->breadth);
    return 0;
}