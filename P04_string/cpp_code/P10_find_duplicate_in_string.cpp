#include <iostream>
using namespace std;
int main() {
    char s[] = "nnikhoiiiiooooiln";
    for (int i = 0; s[i] - 1; i++) {
        int count = 1;
        if (s[i] != -1) {
            for (int j = i + 1; s[j] != '\0'; j++) {
                if (s[j] == s[i]) {
                    count++;
                    s[j] = -1;
                }
            }
            if (count > 1)
                // printf("%c appaers %d times\n", s[i], count);
                cout<< s[i]<<" appaers "<<count<<" times "<<endl;
        }
    }
    return 0;
}