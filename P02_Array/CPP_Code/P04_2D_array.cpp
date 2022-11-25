#include <iostream>
using namespace std;
int main() {
    // method 1
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int *B[3];
    int **C;


    //method 2
    
    // B[0] = new int[4];
    // B[1] = new int[4];
    // B[2] = new int[4];

    for (int i = 0; i < 3; i++) {
        B[i] = new int[4];
    }

    int count = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            B[i][j] = ++count;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // free dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete[] B[i];  // delete array within matrix
        B[i] = NULL;
    }

    // method 3
    C = new int *[3];
    // C[0] = new int[4];
    // C[1] = new int[4];
    // C[2] = new int[4];
    for (int i = 0; i < 3; i++) {
        C[i] = new int[4];
    }

    int count1 = 5;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = ++count1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // free dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete[] C[i];  // delete array within matrix
    }
    delete[] C;

    return 0;
}