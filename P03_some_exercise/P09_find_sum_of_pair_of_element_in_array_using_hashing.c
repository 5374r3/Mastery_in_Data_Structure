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

void PairOfElements(struct Array arr, int sum, int low, int high) {
    int total_length = arr.length;
    int H[high];
    for (int i = 1; i <= high; i++)
        H[i] = 0;
    for (int i = 0; i < total_length; i++) {
        if (H[sum - arr.A[i]] != 0 && (sum - arr.A[i] > 1)) {
            printf("(%d,%d)\n", arr.A[i], sum - arr.A[i]);
        }
        H[arr.A[i]]++;
    }
}

int main() {
    struct Array arr = {{6, 3, 10, 16, 22, 5, 2, 9, 1, 8}, 10};

    Display(arr);

    PairOfElements(arr, 11, 1, 16);
}



// #include <stdio.h>
// int main() {
//     int A[] = {6, 3, 10, 16, 8, 5, 2, 9, 1, 14};
//     int high,low;
//     high = 14,low=1;
//     int total_length = 10;
//     int H[high];
//     for(int i=0;i<high;i++)
//         H[i]=0;
//     int sum = 11;
//     for(int i=0;i<total_length;i++){
//             if (H[sum - A[i]]!=0 && sum-A[i]>1) {
//                 printf("(%d,%d)\n", A[i], sum-A[i]);
//             }
//             H[A[i]]++;
//         }
//     return 0;
// }