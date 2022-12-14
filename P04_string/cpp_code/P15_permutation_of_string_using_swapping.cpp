#include <iostream>
using namespace std;
void swap(char *x,char *y){
    char t;
    t = *x;
    *x = *y;
    *y = t;
}
void Permutation(char s[], int low,int high) {
    int i;
    if(low==high){
        cout<<s<<endl;
    }
    for(i = low;i<=high;i++){
        swap(&s[low],&s[i]);
        Permutation(s,low+1,high);
        swap(&s[low],&s[i]);
    }
}

int main() {
    char S[] = "ABC";
    Permutation(S, 0,2);
    return 0;
}