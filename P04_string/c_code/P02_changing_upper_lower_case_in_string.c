#include <stdio.h>
int main() {
    char s[] = "welcome";
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = s[i] - 32;
    }
    printf("%s\n", s);

    char s1[] = "MONDAY";
    for (int i = 0; s1[i] != '\0'; i++) {
        s1[i] = s1[i] + 32;
    }
    printf("%s\n", s1);

    char A[] = "PraBhaKAr";
    for (int i = 0; s[i] != '\0'; i++) {
        // if (A[i] >= 65 && A[i] <= 90) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            A[i] = A[i] + 32;
            // } else if (A[i] >= 97 && A[i] <= 122) {
        } else if (A[i] >= 'a' && A[i] <= 'z') {
            A[i] = A[i] - 32;
        }
    }
    printf("%s\n", A);
    return 0;
}

/*
asii code
A = 65     a = 97
B = 66     b = 98
.          .
.          .
.          .
Z = 90     z = 122

diff = 97 - 65 = 32


 */
