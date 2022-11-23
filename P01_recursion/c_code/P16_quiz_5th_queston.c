#include <stdio.h>

void count(int n){
    static int d = 1;
    printf("n=%d\n",n);
    printf("d=%d\n",d);
    d++;
    if(n>1)
        count(n-1);
    printf("d=%d\n",d);
}

int main() {
   count(3);
    return 0;
}