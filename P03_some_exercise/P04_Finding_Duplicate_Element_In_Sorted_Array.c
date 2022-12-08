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
    int lastduplicate = 0;
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastduplicate) {
            printf("missing element is %d\n", arr.A[i]);
            lastduplicate = arr.A[i];
        }
    }
}

int main() {
    struct Array arr = {{3, 4, 5, 6, 7, 7, 8, 13, 14, 14}, 10};

    Display(arr);

    DuplicateElements(arr);
}

/* without using structure */

// #include <stdio.h>
// int main() {
//     int A[] = {2, 2, 4, 4, 8, 8, 14, 14, 15,15};
//     int total_length = 10;
//     int lastduplicate = 0;
//     for (int i = 0; i < total_length - 1; i++) {
//         if (A[i] == A[i + 1] && A[i] != lastduplicate) {
//             printf("duplicate element is %d\n", A[i]);
//             lastduplicate = A[i];
//         }
//     }

//     return 0;
// }