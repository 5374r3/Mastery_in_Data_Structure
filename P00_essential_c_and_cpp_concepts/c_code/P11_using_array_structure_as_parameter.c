#include<stdio.h>
struct Test {
    int a[5];
    int n;
};
void fun(struct Test t1) {
    t1.a[0]=20;
    t1.a[1]=30;

    for(int i=0;i<t1.n;i++)
        printf("%d ",t1.a[i]);
    printf("\n");
}

int main() {
    struct Test t = {{2,4,6,8,10},5};
    fun(t);

    for(int i=0;i<t.n;i++)
        printf("%d ",t.a[i]);
printf("\n");
}
