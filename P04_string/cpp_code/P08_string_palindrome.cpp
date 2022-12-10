#include <stdio.h>
#include <stdlib.h>
int main() {
    char B[] = "anna";
    char t;
    bool palindrome = true;
    int i, j;
    printf("String \"%s\" is ", B);
    for (j = 0; B[j] != '\0'; j++) {
        // no code here
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        if (B[i] != B[j]) {
            palindrome = false;
        }
    }
    if (palindrome == true)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}