#include <stdio.h>

// pass/call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// call/pass by address
void swap1(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int add_fun(int a, int b) {
    return a + b;
}

int main() {
    // eg1 call/pass by value
    int num1 = 10, num2 = 20;
    printf("\nbefore swapping\n");
    printf("num1 = %d and num2 = %d\n",num1,num2);
    swap(num1, num2);  // swaping not occur because actual value not swap here
    printf("after swapping\n");
    printf("num1 = %d and num2 = %d\n",num1,num2);

    // eg2 call/pass by address
    int a = 10, b = 20;
    printf("\nbefore swapping\n");
    printf("a = %d and b = %d\n",a,b);
    swap1(&a, &b);  // swaping done
    printf("after swapping\n");
    printf("a = %d and  b = %d\n",a,b);

    // call/pass by value another exampl
    int m = 10, n = 20, sum;
    sum = add_fun(m, n);
    printf("\nsum=%d\n",sum);
}