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
        if (arr.A[i] == arr.A[i + 1]) {
            int j = i+1;
            while(arr.A[i]==arr.A[j]){
                j++;
            }
            printf("%d apppares %d times\n", arr.A[i],j-i);
            i =j-1;
        }
    }
}

int main() {
    struct Array arr = {{3, 4, 5, 6, 7, 7, 7, 13, 14, 14}, 10};

    Display(arr);

    DuplicateElements(arr);
}

/* without using structure */

// #include <stdio.h>
// int main() {
//     int A[] = {2, 2, 4, 4, 8, 8, 8, 14, 15, 15};
//     int total_length = 10;
//     for (int i = 0; i < total_length - 1; i++) {
//         if (A[i] == A[i + 1]) {
//             int j = i + 1;
//             while (A[j] == A[i])
//                 j++;
//             printf("%d appaers %d times\n",A[i],j-i);
//             i=j-1;
//         }
//     }
// return 0;
// }