#include<stdio.h>

int main() {
    int A[5];
    int B[5]={1,2,3,4,5};
    int C[5]={1,2};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};
    
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d ",B[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d ",C[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d ",D[i]);
    }
    printf("\n");

    for(int i=0;i<6;i++){
        printf("%d ",E[i]);
    }
    printf("\n");

    for(int i=0;i<6;i++){
        // printf("%u\n",&E[i]);
        printf("%p\n",&E[i]);
    }
    printf("\n");

    return 0;
}