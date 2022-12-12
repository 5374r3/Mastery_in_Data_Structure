#include <stdio.h>
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
            printf("%c appear %d times\n", i + 97, H[i]);
        }
    }
    return 0;
}

// small letter case a=97 b=98 --z=122 122-97=25

// i= 105  // 105 - 97 = 8    //8+97 = 105
//            s[i]- 97          i+97