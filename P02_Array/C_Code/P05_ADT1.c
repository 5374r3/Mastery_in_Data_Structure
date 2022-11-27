#include <stdio.h>
#include <stdlib.h>
struct Array {
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr) {
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}
int main() {
    struct Array arr={{1,2,3,4,5},20,5};
    Display(arr);
    return 0;
}

//  struct Array arr={{1,2,3,4,5},20,5};
// {1,2,3,4,5} element of array
// 20 size of array
// 5 length of array