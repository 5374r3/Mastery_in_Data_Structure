#include<stdio.h>
int main(){
    char s[]="mohiinkknoo";
    for (int i = 0; s[i] - 1; i++) {
        int count = 1;
        if (s[i] != -1)
            for (int j = i + 1; s[j]!='\0'; j++) {
                if (s[i] == s[j]) {
                    count++;
                    s[j] = -1;
                }
            }
        if (count > 1)
            printf("%c appaers %d times\n", s[i], count);
    }
    return 0;
}
