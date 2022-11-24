#include<iostream>
using namespace std;

int main() {
    int A[5];
    int B[5]={1,2,3,4,5};
    int C[5]={1,2};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};
    
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<D[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        cout<<E[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        // printf("%u\n",&E[i]);
        cout<<&E[i]<<" ";
    }
    cout<<endl;

    return 0;
}