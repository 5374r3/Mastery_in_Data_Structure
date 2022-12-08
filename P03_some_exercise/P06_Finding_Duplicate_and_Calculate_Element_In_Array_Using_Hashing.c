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

// void MissingElements(struct Array arr, int low, int high, int size) {
//     int H[high];
//     for (int i = 0; i < high; i++) {
//         H[i] = 0;
//     }

//     for (int i = 0; i < arr.length; i++) {
//         H[arr.A[i]]++;
//     }

//     for (int i = low; i < high; i++) {
//         if (H[i] == 0)
//             printf("Missing Elements are: %d\n", i);
//     }
// }

// int main() {
//     struct Array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10},10};
//     // struct Array arr = {{3, 4, 5, 6, 7, 8, 10, 13, 14, 15},10};

//     Display(arr);

//     MissingElements(arr, 3, 12, 10);
//     // MissingElements(arr, 3, 15, 10);
// }

/* without using structure */

#include <stdio.h>
int main() {
    int A[] = {3, 10, 5, 6, 7, 8, 10, 6, 10, 15};
    // int A[] = {2, 7, 4, 4, 12, 6, 1, 11, 2, 10};
    // int low = 1;
    // int high = 12;
    int low = 3;
    int high = 15;
    int H[high];
    for (int i = 0; i < high; i++)
        H[i] = 0;
    for (int i = 0; i < 10; i++)
        H[A[i]]++;
    for (int i = low; i <= high; i++) {
        if (H[i] > 1)
            printf("%d apears %d times\n", i,H[i]);
    }
    return 0;
}