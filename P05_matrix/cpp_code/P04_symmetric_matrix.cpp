#include <iostream>
using namespace std;

class Matrix {
   private:
    int *B;
    int n;

   public:
   public:
    Matrix() {
        n = 4;
        B = new int[n * (n + 1) / 2];
    }
    Matrix(int n) {
        this->n = n;
        B = new int[n * (n + 1) / 2];
    }
    ~Matrix() {
        delete[] B;
    }
    void setMatrix(int i, int j, int y);
    int getMatrix(int i, int j);
    void displayMatrix();
};

void Matrix::setMatrix(int i, int j, int y) {
    if (i >= j)
        B[i * (i - 1) / 2 + j - 1] = y;
}

int Matrix::getMatrix(int i, int j) {
    if (i >= j)
        return B[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void Matrix::displayMatrix() {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i >= j)
                printf("%d ", B[i * (i - 1) / 2 + j - 1]);
            else if (j > i)
                printf("%d ", B[j * (j - 1) / 2 + i - 1]);
        }
        printf("\n");
    }
}

int main() {
    struct Matrix m;
    int i, j, y;

    m.setMatrix(1, 1, 2);
    m.setMatrix(1, 2, 2);
    m.setMatrix(1, 3, 2);
    m.setMatrix(1, 4, 2);

    m.setMatrix(2, 1, 2);
    m.setMatrix(2, 2, 3);
    m.setMatrix(2, 3, 3);
    m.setMatrix(2, 4, 3);

    m.setMatrix(3, 1, 2);
    m.setMatrix(3, 2, 3);
    m.setMatrix(3, 3, 3);
    m.setMatrix(3, 4, 4);

    m.setMatrix(4, 1, 2);
    m.setMatrix(4, 2, 3);
    m.setMatrix(4, 3, 3);
    m.setMatrix(4, 4, 4);

    // user input
    /*  int n;

     printf ("Enter Dimension of Matrix: ");
     scanf ("%d", &n);
     struct Matrix m(n);
     printf ("Enter all the elements of the matrix:\n");
     for (i = 1; i <= n; i++)
     {
         for (j = 1; j <= n; j++)
         {
            scanf ("%d", &y);
            m.setMatrix(i, j, y);
         }
     }
  */
    m.displayMatrix();
}

// 4
// 2 2 2 2
// 2 3 3 3
// 2 3 3 3
// 2 3 3 4

// 5
// 2 2 2 2 2
// 2 3 3 3 3
// 2 3 3 4 4
// 2 3 4 4 5
// 2 3 4 5 6