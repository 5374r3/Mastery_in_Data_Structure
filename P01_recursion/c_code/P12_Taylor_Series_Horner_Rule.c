#include <stdio.h>

double e_iterative_method(int x, int n) {
    double s = 1;
    int i;
    double num = 1, den = 1;  // numerator denominator
    for (int i = 1; i <= n; i++) {
        num = num * x;
        den = den * i;
        s = s + num / den;
    }
    return s;
}

double e(int x, int n) {
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}

int main() {
    int x, n;
    double result = e(1, 10);  // 1e = 2.718282
    // e^1 and 10 is number of terms
    printf("%lf\n", result);

    double result1 = e_iterative_method(1, 10);  // 1e = 2.718282
    // e^1 and 10 is number of terms
    printf("%lf\n", result1);
}