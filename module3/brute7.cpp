//Matrix Multiplication
//Brute Force Approach: Multiply two matrices by iterating through each element.

#include <iostream>
using namespace std;

const int MAX = 10; // Maximum size for matrices

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
                cout << "Intermediate Result for C[" << i << "][" << j << "]: " << C[i][j] << endl;
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;
    
    cout << "Enter rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;
    
    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }
    
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }
    
    multiplyMatrices(A, B, C, rowsA, colsA, colsB);
    
    cout << "Resultant Matrix C:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

