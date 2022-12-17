#include <iostream>
using namespace std;

class Matrix {
   private:
    int *A;
    int n;

   public:
    Matrix(){
        n = 2;
        A = new int[n];
    }
    Matrix(int n) {
        this->n = n;
        A = new int[n];
    }
    void setMatrix(int i, int j, int k);
    void displayMatrix();
    int getMatrix(int i, int j);
    ~Matrix() {
        delete[] A;
    }
};
void Matrix::setMatrix(int i, int j, int k) {
    if (i == j) {
        A[i - 1] = k;
    }
}

int Matrix::getMatrix(int i, int j) {
    if (i == j)
        return A[i - 1];
    else
        return 0;
}
// void Matrix::displayMatrix() {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) {
//                 cout<<A[i]<<" ";
//             } else {
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
//     }
// }

void Matrix::displayMatrix() {
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=n; j++) {
            if (i == j) {
                cout<<A[i - 1]<<" ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main() {
    Matrix m2;
    Matrix m1(4);
    m1.setMatrix(1, 1, 10);
    m1.setMatrix(2, 2, 18);
    m1.setMatrix(3, 3, 17);
    m1.setMatrix(4, 4, 16);
    m1.displayMatrix();
    printf("%d\n", m1.getMatrix(2, 2));
    printf("%d\n\n", m1.getMatrix(1, 1));

    m2.setMatrix(1, 1, 22);
    m2.setMatrix(2, 2, 66);
    m2.displayMatrix();
    printf("%d\n",m2.getMatrix(1,1));

    return 0;
}
//CONSTRUCTOR OVERLOADING


// 1 2 3 4
// 9 0 0 0
// 0 8 0 0
// 0 0 7 0
// 0 0 0 6

// 0 1 2 3
// 9 8 7 6