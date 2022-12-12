#include <iostream>
using namespace std;
int main() {
    char S[] = "decimail";
    char A[] = "medical";
    int H[26],i;
    for (i = 0; i < 26; i++) {
        H[i] = 0;
    }
    for(i =0;S[i]!='\0';i++){
        H[S[i]-97]++;
    }
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]--;
        if(H[A[i]-97]<0){
            cout<<"string is not anagram";
            break;
        }
    }
    if(A[i]=='\0'){
        cout<<"string is Anagram";
    }
    return 0;
}