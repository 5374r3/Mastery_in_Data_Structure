#include <iostream>
using namespace std;

class Matrix {
   private:
    int *B;
    int n;

   public:
   public:
    Matrix() {
        n = 5;
        B = new int[n * (n + 1) / 2];
    }
    Matrix(int n) {
        this->n = n;
        B = new int[n * (n + 1) / 2];
    }
    ~Matrix() {
        delete[] B;
    }
    void Set(int i, int j, int y);
    int Get(int i, int j);
    void Display();
};

void Matrix::Set(int i, int j, int y) {
    if (i - j == 1) {
        B[i - 1] = y;
    }
    if (i - j == 0) {
        B[n - 1 + i - 1] = y;
    }
    if (i - j == -1) {
        B[(2 * n) - 1 + i - 1] = y;
    }
}

int Matrix::Get(int i, int j) {
    if (i - j == 1) {
        return B[i - 1];
    }
    if (i - j == 0) {
        return B[n - 1 + i - 1];
    }
    if (i - j == -1) {
        return B[(2 * n) - 1 + i - 1];
    }

    return 0;
}

void Matrix::Display() {
    int i, j;

    printf("\nMatrix is: \n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i - j == 1) {
                printf("%d ", B[i - 1]);
            } else if (i - j == 0) {
                printf("%d ", B[n - 1 + i - 1]);
            } else if (i - j == -1) {
                printf("%d ", B[(2 * n) - 1 + i - 1]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    struct Matrix M;
    int i, j, y, n;
    printf("Enter Dimension of Matrix: ");
    scanf("%d", &n);
    printf("Enter all the elements of the matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &y);
            M.Set(i, j, y);
        }
    }

    M.Display();
    printf("%d\n",M.Get(1,1));
    printf("%d\n",M.Get(3,4));
}

// 5
// 1 2 0 0 0
// 1 2 3 0 0
// 0 1 2 3 0
// 0 0 1 2 3
// 0 0 0 1 2
