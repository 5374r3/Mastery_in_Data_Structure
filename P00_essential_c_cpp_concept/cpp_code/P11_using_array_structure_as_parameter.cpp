#include<iostream>
using namespace std;
struct Test {
    int a[5];
    int n;
};
void fun(struct Test t1) {
    t1.a[0]=20;
    t1.a[1]=30;

    for(int i=0;i<t1.n;i++)
        cout<<t1.a[i]<<" ";
    cout<<endl;
}

int main() {
    struct Test t = {{2,4,6,8,10},5};
    fun(t);
    for(int x: t.a)
        cout<<x<<" ";
    cout<<endl;
}
