#include <stdio.h>

/* int fun(int n) {
    if (n > 0) {
        fun(n - 1);
        printf("%d ",n);
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
    int i = 1;
    while (i <= n) {
        printf("%d ",i);
        i++;
    }
    return 0;
}

int main() {
    int a = 3;
    fun(a);
}

// time complexity -> O(n)
// space complexity -> O(1) because its not callling again and agian