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

void DuplicateElements(struct Array arr) {
    for (int i = 0; i < arr.length - 1; i++) {
        int count = 1;
        if (arr.A[i] != -1)
            for (int j = i + 1; j < arr.length; j++) {
                if (arr.A[i] == arr.A[j]) {
                    count++;
                    arr.A[j] = -1;
                }
            }
        if (count > 1)
            printf("%d appaers %d times\n", arr.A[i], count);
    }
}

int main() {
    struct Array arr = {{14, 4, 5, 6, 7, 7, 8, 13, 14, 14}, 10};

    Display(arr);

    DuplicateElements(arr);
}

/* without using structure */

// #include <stdio.h>
// int main() {
//     int A[] = {15, 2, 4, 4, 8, 8, 14, 14, 14, 15};
//     int total_length = 10;
//     for (int i = 0; i < total_length - 1; i++) {
//         int count = 1;
//         if (A[i] != -1)
//             for (int j = i + 1; j < total_length; j++) {
//                 if (A[i] == A[j]) {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//         if (count > 1)
//             printf("%d appaers %d times\n", A[i], count);
//     }
//     return 0;
// }