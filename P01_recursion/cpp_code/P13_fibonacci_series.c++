#include <iostream>
using namespace std;
// time complexity O(n)
int fib_iterative(int n) {
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1) return n;
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
// time complexity O(2^n)
int fib_recursion(int n) {
    if (n <= 1) return n;
    return fib_recursion(n - 1) + fib_recursion(n - 2);
}

// memoization
// time complexity O(n)
int F[10];  // global
int fib_memoization(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n - 2] == -1)
            F[n - 2] = fib_memoization(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fib_memoization(n - 1);

        return F[n - 2] + F[n - 1];
    }
}

int main() {
    int num = 7;

    for (int i = 0; i < 10; i++) {
        F[i] = -1;
    }

    //    0  1 1 2 3 5 8 13
    //    0  1 2 3 4 5 6 7
    cout<<fib_iterative(num)<<endl;

    cout<<fib_recursion(num)<<endl;

    cout<<fib_memoization(num)<<endl;
}