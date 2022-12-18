#include <stdio.h>
#include <stdlib.h>
struct LT_Matrix {
    int *A;
    int n;
};
// colum wise implement
void setMatrixC(struct LT_Matrix *m, int i, int j, int k) {
    if (i <= j)
        m->A[j * (j - 1) / 2 + i - 1] = k;
}
// Row wise implementation
void setMatrixR(struct LT_Matrix *m, int i, int j, int k) {
    if (i <= j)
        m->A[(m->n * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i)] = k;
}

int getMatrixC(struct LT_Matrix *m, int i, int j) {
    if (i <= j)
        return m->A[j * (j - 1) / 2 + i - 1];
    else
        return 0;
}
int getMatrixR(struct LT_Matrix *m, int i, int j) {
    if (i <= j)
        return m->A[(m->n * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i)];
    else
        return 0;
}
// column wise
void displayMatrixC(struct LT_Matrix m) {
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            if (i <= j)
                printf("%d ", m.A[j * (j - 1) / 2 + i - 1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

// Row wise
void displayMatrixR(struct LT_Matrix m) {
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            if (i <= j)
                printf("%d ", m.A[(m.n * (i - 1) - (i - 2) * (i - 1) / 2) + (j - i)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main() {
    struct LT_Matrix m, m2;
    m.n = 4;
    m.A = (int *)malloc((m.n * (m.n + 1) / 2) * sizeof(int));
    setMatrixR(&m, 1, 1, 1);
    setMatrixR(&m, 1, 2, 3);
    setMatrixR(&m, 1, 3, 2);
    setMatrixR(&m, 1, 4, 2);
    setMatrixR(&m, 2, 2, 3);
    setMatrixR(&m, 2, 3, 8);
    setMatrixR(&m, 2, 4, 5);
    setMatrixR(&m, 3, 3, 7);
    setMatrixR(&m, 3, 4, 6);
    setMatrixR(&m, 4, 4, 4);

    // user input from keyboard

    // int x;
    // printf("Enter the Matrix dimension ");
    // scanf("%d", &m.n);
    // m.A = (int *)malloc((m.n * (m.n + 1) / 2) * sizeof(int));
    // printf("enter all element \n");
    // for (int i = 1; i <= m.n; i++) {
    //     for (int j = 1; j <= m.n; j++) {
    //         scanf("%d", &x);
    //         setMatrixR(&m, i, j, x);
    //     }
    // }
    displayMatrixR(m);
    printf("%d\n", getMatrixR(&m, 1, 1));
    printf("%d\n", getMatrixR(&m, 4, 4));
    // column wise opration

    printf("\n\n");
    m2.n = 4;
    m2.A = (int *)malloc((m2.n * (m2.n + 1) / 2) * sizeof(int));
    setMatrixC(&m2, 1, 1, 1);
    // setMatrixC(&m2, 1, 2, 2); //it will not set value if try to pass
    // setMatrixC(&m2, 1, 3, 2);// //it will not set value if try to pass
    setMatrixC(&m2, 1, 2, 3);
    setMatrixC(&m2, 1, 3, 2);
    setMatrixC(&m2, 1, 4, 2);
    setMatrixC(&m2, 2, 2, 5);
    setMatrixC(&m2, 2, 3, 3);
    setMatrixC(&m2, 2, 4, 8);
    setMatrixC(&m2, 3, 3, 7);
    setMatrixC(&m2, 3, 4, 9);
    setMatrixC(&m2, 4, 4, 7);

    //user input

    // int x;
    // printf("Enter the Matrix dimension ");
    // scanf("%d", &m2.n);
    // m2.A = (int *)malloc((m2.n * (m2.n + 1) / 2) * sizeof(int));
    // printf("enter all element \n");
    // for (int i = 1; i <= m2.n; i++) {
    //     for (int j = 1; j <= m2.n; j++) {
    //         scanf("%d", &x);
    //         setMatrixC(&m2, i, j, x);
    //     }
    // }
    displayMatrixC(m2);
    printf("\n\n");
    printf("%d\n", getMatrixC(&m2, 1, 1));
    printf("%d\n", getMatrixC(&m2, 3, 3));
    return 0;
}

// 4
// 2 0 0 0
// 2 2 0 0
// 3 2 3 0
// 4 4 1 1