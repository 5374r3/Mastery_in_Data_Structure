#include<stdio.h>

struct Matrix{
    int A[10];
    int n;
};
void setMatrix(struct Matrix *m,int i,int j, int k){
    if(i==j){
        m->A[i-1] = k;
    }
}

int getMatrix(struct Matrix *m,int i,int j){
    if(i==j)
        return m->A[i-1];
    else
        return 0;
}
// void displayMatrix(struct Matrix m){
//     for(int i=0;i<m.n;i++){
//         for(int j=0;j<m.n;j++){
//             if(i==j){
//                 printf("%d ",m.A[i]);
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }
void displayMatrix(struct Matrix m){
    for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            if(i==j){
                printf("%d ",m.A[i-1]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main(){
    struct Matrix m;
    m.n=4;
    setMatrix(&m,1,1,9);
    setMatrix(&m,2,2,8);
    setMatrix(&m,3,3,7);
    setMatrix(&m,4,4,6);
    displayMatrix(m);
    printf("%d\n",getMatrix(&m,4,4));
    printf("%d\n",getMatrix(&m,1,1));
    return 0;
}


// 1 2 3 4           
// 9 0 0 0 
// 0 8 0 0 
// 0 0 7 0 
// 0 0 0 6 


// 0 1 2 3 
// 9 8 7 6