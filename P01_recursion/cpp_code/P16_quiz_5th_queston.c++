#include <iostream>
using namespace std;

void count(int n){
    static int d = 1;
    // printf("n=%d\n",n);
    // printf("d=%d\n",d);
    cout<<"n="<<n<<endl;
    cout<<"d="<<d<<endl;
    d++;
    if(n>1)
        count(n-1);
    // printf("d=%d\n",d);
    cout<<"d="<<d<<endl;
}

int main() {
   count(3);
    return 0;
}