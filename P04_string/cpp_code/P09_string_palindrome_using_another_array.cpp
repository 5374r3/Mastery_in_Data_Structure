#include <iostream>
using namespace std;
int main() {
    // char A[] = "kkmomkk";
    char A[] = "nitin";
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
        cout<<"palindrome"<<endl;
    } else {
        cout<<"not palindrome"<<endl;
    }
    return 0;
}