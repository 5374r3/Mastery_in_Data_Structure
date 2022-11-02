#include <iostream>
using namespace std;
int power_of_number(int m, int n) {
    if (n == 0)
        return 1;
    return power_of_number(m, n - 1) * m;
}

int power_improved_way(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power_improved_way(m * m, n / 2);
    else
        return power_improved_way(m * m, n / 2) * m;
}
int power_without_recursion(int m, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * m;
    }
    return result;
}

int main() {
    int m, n;
    // scanf("%d %d",&m,&n);
    // cin>>m>>n;
    m = 2, n = 9;  // 2^9
    // m = 3, n = 5; 
    int result = power_of_number(m, n);
    printf("%d\n", result);
    cout<<result<<endl;

    int result1 = power_improved_way(m, n);
    // printf("%d\n", result1);
    cout<<result1<<endl;

    int result2 = power_without_recursion(m, n);
    // printf("%d\n", result2);
    cout<<result2<<endl;
    
}