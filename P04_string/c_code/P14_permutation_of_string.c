#include <stdio.h>
void Permutation(char s[], int k) {
    static int A[10] = {0};
    static char res[10] = {0};
    if (s[k] == '\0') {
        res[k] = '\0';
        printf("%s\n", res);
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            if (A[i] == 0) {
                res[k] = s[i];
                A[i] = 1;
                Permutation(s, k + 1);
                A[i] = 0;  // backtrack
            }
        }
    }
}

int main() {
    char S[] = "ABC";
    Permutation(S, 0);
    return 0;
}