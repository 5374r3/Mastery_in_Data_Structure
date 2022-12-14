#include <iostream>
using namespace std;
int main() {
    char S[] = "finding";
    int H[26];
    for (int i = 0; i < 26; i++) {
        H[i] = 0;
    }
    for (int i = 0; S[i] != '\0'; i++) {
        H[S[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (H[i] > 1) {
            cout<<char(i + 97)<<" appear "<<H[i]<<" times"<<endl;
        }
    }
    return 0;
}

// small letter case a=97 b=98 --z=122 122-97=25

// i= 105  // 105 - 97 = 8    //8+97 = 105
//            s[i]- 97          i+97