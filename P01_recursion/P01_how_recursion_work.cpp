#include <iostream>
#include<stdio.h>
using namespace std;

// recursion eg1
void fun1(int n) {
    if (n > 0) {
        // printf("%d ", n);
        cout<<n<<" ";
        fun1(n - 1);
    }
}

// recursion eg2
void fun2(int n) {
    if (n > 0) {
        fun2(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int x = 4;
    fun1(x);
    printf("--------------------------\n");
    fun2(x);
}