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

void DuplicateElements(struct Array arr, int low, int high, int size) {
    int H[high];
    for (int i = 1; i <= high; i++) {
        H[i] = 0;
    }

    for (int i = 0; i < arr.length; i++) {
        H[arr.A[i]]++;
    }
    printf("\n");
    for (int i = low; i <= high; i++) {
        if (H[i] > 1)
            printf("%d apears %d times\n", i, H[i]);
    }
}

int main() {
    struct Array arr = {{2, 7, 4, 4, 12, 6, 11, 11, 2, 10}, 10};
    // struct Array arr = {{1, 2, 3, 7, 7, 8, 13, 15, 16,16},10};

    Display(arr);

    DuplicateElements(arr, 3, 12, 10);
    // DuplicateElements(arr, 3, 16, 10);
}

/* without using structure */

// #include <stdio.h>
// int main() {
//     int A[] = {3, 10, 5, 6, 7, 8, 10, 6, 10, 15};
//     // int A[] = {2, 7, 4, 4, 12, 6, 1, 11, 2, 10};
//     // int low = 1;
//     // int high = 12;
//     int total_length = 10;
//     int low = 3;
//     int high = 15;
//     int H[high];
//     for (int i = 0; i < high; i++)
//         H[i] = 0;
//     for (int i = 0; i < total_length; i++)
//         H[A[i]]++;
//     for (int i = low; i <= high; i++) {
//         if (H[i] > 1)
//             printf("%d apears %d times\n", i,H[i]);
//     }
//     return 0;
// }