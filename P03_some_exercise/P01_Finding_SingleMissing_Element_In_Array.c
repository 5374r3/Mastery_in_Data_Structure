#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int length;
};

// Given a sorted array, Time Complexity: O(n)
// Using the difference between the element and the index
// Example : [6,7,9,10,11]
// Diff is 6 because: A[0] - 0 = 6
// Next, iterate over the array until the difference is not 6
// A[2] - 2 = 7, so we found the missing element

void FindSingleMissingElement(struct Array arr) {
    int low = arr.A[0];
    int diff = low - 0;
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] - i != diff) {
            printf("Missing element is: %d", i + diff);
            return;
        }
    }
    printf("No Missing Element\n");
}
int main() {
    struct Array arr;
    arr.length = 10;
    arr.A = (int *)malloc(arr.length * sizeof(int));

    arr.A[0] = 8;
    arr.A[1] = 10;
    arr.A[2] = 11;
    arr.A[3] = 12;
    arr.A[4] = 13;
    arr.A[5] = 14;
    arr.A[6] = 15;
    arr.A[7] = 16;
    arr.A[8] = 17;
    arr.A[9] = 18;
    FindSingleMissingElement(arr);
    free(arr.A);
    return 0;
}