// #include <stdio.h>
// struct Array {
//     int A[10];
//     int length;
// };

// void Display(struct Array arr) {
//     int i;
//     printf("Elements are:\n");
//     for (i = 0; i < 10; i++)
//         printf("%d ", arr.A[i]);
//     printf("\n\n");
// }

// void PairOfElements(struct Array arr, int sum) {
//     for (int i = 0; i < arr.length - 1; i++) {
//         for (int j = i + 1; j < arr.length; j++) {
//             if (sum == arr.A[i] + arr.A[j]) {
//                 printf("(%d,%d)\n", arr.A[i], arr.A[j]);
//             }
//         }
//     }
// }

// int main() {
//     struct Array arr = {{6, 3, 10, 16, 8, 5, 2, 9, 1, 14}, 10};

//     Display(arr);

//     PairOfElements(arr, 11);
// }

#include <stdio.h>
int main() {
    int A[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int total_length = 10;
    int sum = 11;
    int i = 0;
    int j = total_length - 1;
    while (i < j) {
        if (A[i] + A[j] == sum) {
            printf("(%d,%d)\n", A[i], A[j]);
            i++;
            j--;
        } else if (A[i] + A[j] < sum) {
            i++;
        } else {
            j--;
        }
    }
    return 0;
}