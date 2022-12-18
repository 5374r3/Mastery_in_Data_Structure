#include <iostream>
using namespace std;
class LT_Matrix {
   private:
    int *A;
    int n;

   public:
    LT_Matrix() {
        n = 4;
        A = new int[n * (n + 1) / 2];
    }
    LT_Matrix(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    void setMatrixR(int i, int j, int k);
    void setMatrixC(int i, int j, int k);
    void displayMatrixR();
    void displayMatrixC();
    int getMatrixR(int i, int j);
    int getMatrixC(int i, int j);
    ~LT_Matrix() {
        delete[] A;
    }
};
// row wise implement
void LT_Matrix::setMatrixR(int i, int j, int k) {
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = k;
}
int LT_Matrix::getMatrixR(int i, int j) {
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}
void LT_Matrix::displayMatrixR() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j)
                printf("%d ", A[i * (i - 1) / 2 + j - 1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
// column wise implementation
void LT_Matrix::setMatrixC(int i, int j, int k) {
    if (i >= j)
        A[(n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j)] = k;
}

int LT_Matrix::getMatrixC(int i, int j) {
    if (i >= j)
        return A[(n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j)];
    else
        return 0;
}

void LT_Matrix::displayMatrixC() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j)
                printf("%d ", A[(n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main() {
    struct LT_Matrix m, m2;
    // struct LT_Matrix m(4), m2(4);
    m.setMatrixR(1, 1, 1);
    // m.setMatrixR(1, 2, 2); //it will not set value if try to pass
    // m.setMatrixR(1, 3, 2);// //it will not set value if try to pass
    m.setMatrixR(2, 1, 3);
    m.setMatrixR(2, 2, 2);
    m.setMatrixR(3, 1, 2);
    m.setMatrixR(3, 2, 5);
    m.setMatrixR(3, 3, 3);
    m.setMatrixR(4, 1, 8);
    m.setMatrixR(4, 2, 7);
    m.setMatrixR(4, 3, 6);
    m.setMatrixR(4, 4, 4);

    m.displayMatrixR();
    printf("%d\n", m.getMatrixR(1, 1));
    printf("%d\n", m.getMatrixR(4, 4));
    // column wise opration

    printf("\n");
    m2.setMatrixC(1, 1, 1);
    // m2.setMatrixC(1, 2, 2); //it will not set value if try to pass
    // m2.setMatrixC(1, 3, 2);// //it will not set value if try to pass
    m2.setMatrixC(2, 1, 3);
    m2.setMatrixC(2, 2, 2);
    m2.setMatrixC(3, 1, 2);
    m2.setMatrixC(3, 2, 5);
    m2.setMatrixC(3, 3, 3);
    m2.setMatrixC(4, 1, 8);
    m2.setMatrixC(4, 2, 7);
    m2.setMatrixC(4, 3, 9);
    m2.setMatrixC(4, 4, 7);

    // user input

 /*    int d;
    cout << "Enter Dimensions: ";
    cin >> d;
    int x;
    cout << "Enter All Elements: " << endl;
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d; j++) {
            cin >> x;
            m2.setMatrixC(i, j, x);
        }
    } */

    m2.displayMatrixC();
    printf("\n");
    printf("%d\n", m2.getMatrixC(1, 1));
    printf("%d\n", m2.getMatrixC(3, 3));
    return 0;
}

// 4
// 2 0 0 0
// 2 2 0 0
// 3 2 3 0
// 4 4 1 1