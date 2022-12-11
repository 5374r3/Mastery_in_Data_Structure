#include<iostream>
using namespace std;
int main() {
    char s[] = "mohiinkknoo";
    int len;
    for(len = 0; s[len]; len++);
    // printf("%d\n",len);
    for (int i = 0; i < len; i++) {
        int count = 1;
        if(s[i] != -1)
        for (int j = i + 1; s[j] != '\0'; j++) {
            if (s[i] == s[j]) {
                count++;
                s[j] = -1;
            }
        }
        if (count > 1)
            cout<<s[i]<<" appears "<<count<<" times "<<endl;;
    }
    return 0;
}