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

void PairOfElements(struct Array arr, int sum) {
    for (int i = 0; i < arr.length - 1; i++) {
        for (int j = i + 1; j < arr.length; j++) {
            if (sum == arr.A[i] + arr.A[j]) {
                printf("(%d,%d)\n", arr.A[i], arr.A[j]);
            }
        }
    }
}

int main() {
    struct Array arr = {{6, 3, 10, 16, 8, 5, 2, 9, 1, 14}, 10};

    Display(arr);

    PairOfElements(arr, 11);
}

// #include <stdio.h>
// int main() {
//     int A[] = {6, 3, 10, 16, 8, 5, 2, 9, 1, 14};
//     int totla_length = 10;
//     int sum = 11;
//     for (int i = 0; i < totla_length - 1; i++) {
//         for (int j = i + 1; j < totla_length; j++) {
//             if (sum == A[i] + A[j]) {
//                 printf("(%d,%d)\n", A[i], A[j]);
//             }
//         }
//     }
//     return 0;
// }