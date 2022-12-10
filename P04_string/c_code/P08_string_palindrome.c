#include <stdio.h>
int main() {
    char S[] = "nitin";
    char t;
    int palindrome = 1;
    int i, j;
    for (j = 0; S[j] != '\0'; j++) {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        if(S[i]!=S[j])
        palindrome = 0;
    }

    if (palindrome == 1)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}