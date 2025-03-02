// Representation Change in Transform and Conquer
#include <iostream>
using namespace std;

void transposeMatrix(int mat[][3], int rows, int cols) {
    int transposed[3][3];
    cout << "Original matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposing the matrix..." << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = mat[i][j];
            cout << "Step (" << i + 1 << ", " << j + 1 << "): Transpose[" << j + 1 << "][" << i + 1 << "] = "
                 << mat[i][j] << endl;
        }
    }

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 3;
    int mat[3][3];

    cout << "Enter the elements of the matrix (3x3):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    transposeMatrix(mat, rows, cols);
    return 0;
}
