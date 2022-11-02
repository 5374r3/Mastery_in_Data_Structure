#include<iostream>
using namespace std;


//without static
int without_static_fun(int n) {
    if(n>0) {
        return without_static_fun(n-1) + n;
    }
    return 0;
}

//using static()
int with_static_fun(int n) {
    int static x = 0;
    if(n>0) {
        x++;
        return with_static_fun(n-1) + x;
    }
    return 0;
}


int main() {
    int a=5;
    printf("%d\n",without_static_fun(a));
    printf("%d\n",with_static_fun(a));
    printf("%d\n",with_static_fun(a));
}