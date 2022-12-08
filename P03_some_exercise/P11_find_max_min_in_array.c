#include <stdio.h>
struct Array {
    int A[10];
    int length;
};

void Display(struct Array arr) {
    int i;
    printf("Elements are:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr.A[i]);
    printf("\n\n");
}

void MinMax(struct Array arr) {
    int total_length=arr.length;
    int max = arr.A[0];
    int min = arr.A[0];
    for(int i=1;i<total_length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
        else if(arr.A[i]>max){
            max =arr.A[i];
        }
    }
    printf("max is %d\nmin is %d\n",max,min);
}

int main() {
    struct Array arr = {{6, 3, 10, 16, 8, 5, -2, 9, 1, 14}, 10};

    Display(arr);

    MinMax(arr);
}


// #include<stdio.h>
// int main(){
//     int A[]={5,8,3,9,6,2,10,7,-1,4};
//     int total_length=10;
//     int max = A[0];
//     int min = A[0];
//     for(int i=1;i<total_length;i++){
//         if(A[i]<min){
//             min=A[i];
//         }
//         else if(A[i]>max){
//             max =A[i];
//         }
//     }
//     printf("max is %d\nmin is %d\n",max,min);
//     return 0;
// }