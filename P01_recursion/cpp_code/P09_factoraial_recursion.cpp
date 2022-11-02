#include <iostream>
using namespace std;

// function without recursion
void factorial_without_recursion(int n) {
    int fact = 1;
    /* if (n == 0) {
        printf("%d ", fact);
    } else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("%d\n", fact);
    } */

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << fact << endl;
}

// function with recursion
int factorial_with_recursion(int n) {
    /* if(n==0)
        return 1;
    else
        return factorial_with_recursion(n-1)*n; */


    // no need to write else block becuae of one statement
    if (n == 0)
        return 1;
    return factorial_with_recursion(n - 1) * n;
}

int main() {
    int n;
    cin >> n;
    factorial_without_recursion(n);
    int result = factorial_with_recursion(n);
    cout << result << endl;
}