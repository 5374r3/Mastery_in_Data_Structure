#include <iostream>
using namespace std;
void foo(int n, int sum) {
    int k = 0, j = 0;
    if (n == 0) return;
    k = n % 10;
    j = n / 10;
    sum = sum + k;
    foo(j, sum);
    // printf("%d\n", k);
    cout<<k<<endl;
}
int main() {
    int a = 2048, sum = 0;
    foo(a, sum);
    // printf("sum=%d", sum);
    cout<<"sum="<<sum<<endl;
    return 0;
}