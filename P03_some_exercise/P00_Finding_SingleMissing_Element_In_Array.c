#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];
    int length;
};

// array must be natural number start from 1

void FindSingleMissingElement(struct Array arr) {
    int max_number_in_sequence = 11;
    int sum = (max_number_in_sequence) * (max_number_in_sequence + 1) / 2;
    int s = 0;
    for (int i = 0; i < arr.length; i++) {
        s = s + arr.A[i];
    }
    printf("Missing Element is %d\n", sum - s);
}
int main() {
    struct Array arr ={{1,2,3,4,5,6,7,8,9,11},10};
    FindSingleMissingElement(arr);
    return 0;
}