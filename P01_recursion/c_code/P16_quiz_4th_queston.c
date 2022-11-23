#include <stdio.h>
int fun(int n) {
    int x = 1, k;
    if (n == 1) return x;
    for (int k = 1; k < n; ++k) {
        x = x + fun(k) * fun(n - k);
    }
    return x;
}
int main() {
    printf("%d\n", fun(1));
    printf("%d\n", fun(2));
    printf("%d\n", fun(3));
    printf("%d\n", fun(4));
    printf("%d\n", fun(5));
    return 0;
}