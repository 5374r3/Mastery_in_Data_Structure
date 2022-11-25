#include <stdio.h>
#include <stdlib.h>
int main() {
    // method 1
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");

    int *B[3];
    int **C;

    // method 2
    
    // B[0] = (int *)malloc(4 * sizeof(int));
    // B[1] = (int *)malloc(4 * sizeof(int));
    // B[2] = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 3; i++) {
        B[i] = (int *)malloc(4 * sizeof(int));
    }

    int count = 5;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            B[i][j] = ++count;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");

    for (int i = 0; i < 3; i++) {
        free(B[i]);
        B[i] = NULL;
    }

    // method 3
    C = (int **)malloc(3 * sizeof(int *));
    // C[0] = (int *)malloc(4 * sizeof(int));
    // C[1] = (int *)malloc(4 * sizeof(int));
    // C[2] = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 3; i++) {
        C[i] = (int *)malloc(4 * sizeof(int));
    }

    int count1 = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = ++count1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}