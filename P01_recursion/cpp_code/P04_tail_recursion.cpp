#include <iostream>
using namespace std;

/* int fun(int n) {
    if (n > 0) {
        cout << n << " ";
        fun(n - 1);
    }
    return 0;
}

int main() {
    int a = 3;
    fun(a);
} */


// time complexity -> O(n)
// space complexity -> O(n) 
// converted to while loop

int fun(int n) {
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    return 0;
}

int main() {
    int a = 3;
    fun(a);
}

// time complexity -> O(n)
// space complexity -> O(1) because its not callling again and agian