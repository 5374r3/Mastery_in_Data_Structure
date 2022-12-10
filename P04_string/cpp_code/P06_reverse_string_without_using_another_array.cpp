#include <iostream>
using namespace std;
int main() {
    char S[] = "Sohan";
    char t;
    int i, j;
    for (j = 0; S[j] != '\0'; j++) {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        t = S[i];
        S[i] = S[j];
        S[j] = t;
    }
    cout << S << endl;
    return 0;
}