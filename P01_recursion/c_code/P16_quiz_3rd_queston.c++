#include <stdio.h>
int f(int &x, int c) {
    c = c - 1;
    if (c == 0) return 1;
    x = x + 1;
    return f(x, c) * x;
}

int main() {
    int p = 5;
    printf("%d", f(p,p));
    return 0;
}