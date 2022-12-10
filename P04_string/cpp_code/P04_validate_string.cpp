#include <iostream>
using namespace std;

int valid(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (!(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 95 && s[i] <= 122) && !(s[i] >= 48 && s[i] <= 57))
            return 0;
    }
    return 1;
}

int main() {
    const char *s = "Mohan123";
    if (valid(s)) {
        cout << "valid string";
    } else {
        cout << "invalid string";
    }

    return 0;
}