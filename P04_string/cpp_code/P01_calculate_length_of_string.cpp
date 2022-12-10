#include <iostream>
using namespace std;
int main() {
    // note "char *s" is deprecated use "const char *s"
    //  const char *s = "Mohan";
    char const *s = "Mohan";  // both are correct
    int i;
    for (i = 0; s[i] != '\0'; i++) {
    };
    cout << "Length of string is " << i << endl;
    return 0;
}