#include <iostream>
using namespace std;
int fun(int n) {
    int x = 1, k;
    if (n == 1) return x;
    for (int k = 1; k < n; ++k) {
        x = x + fun(k) * fun(n - k);
    }
    return x;
}
int main() {
    cout<<fun(1)<<endl;
    cout<<fun(2)<<endl;
    cout<<fun(3)<<endl;
    cout<<fun(4)<<endl;
    cout<<fun(5)<<endl;
    return 0;
}