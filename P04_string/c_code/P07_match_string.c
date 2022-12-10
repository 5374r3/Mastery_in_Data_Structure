#include <stdio.h>
int main() {
    char A[] = "penter1243";
    char B[] = "penter1243";
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if (A[i] != B[j]) {
            break;
        }
    }
    if (A[i] == B[j]) {
        printf("string match");
    } else if (A[i] < B[j]) {
        printf("String B is greater");
    } else {
        printf("String A is greater");
    }
    return 0;
}

// greater and less than depends on ascii value