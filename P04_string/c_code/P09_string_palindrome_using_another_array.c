#include <stdio.h>
int main() {
    char A[] = "kmomkk";
    char B[7];
    int i;
    int palindrom = 1;
    for (i = 0; A[i] != '\0'; i++) {
    }
    i = i - 1;
    int j;
    for (j = 0; i > -1; i--, j++) {
        B[j] = A[i];
    }
    B[j] = '\0';
    for (int i = 0; A[i] != '\0' && B[i] != '\0'; i++) {
        if (A[i] != B[i]) {
            palindrom = 0;
        }
    }
    if (palindrom == 1) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }
    return 0;
}