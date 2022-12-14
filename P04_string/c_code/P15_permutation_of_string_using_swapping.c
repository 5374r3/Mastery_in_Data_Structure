#include <stdio.h>
void swap(char *x,char *y){
    char t;
    t = *x;
    *x = *y;
    *y = t;
}
void Permutation(char s[], int low,int high) {
    int i;
    if(low==high){
        printf("%s\n",s);
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