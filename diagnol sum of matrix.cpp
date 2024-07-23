//Write a program to find the sum of elements in the diagonal of a matrix.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    // Input matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int diagonalSum = 0;

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < n; ++i) {
        diagonalSum += matrix[i][i]; // Summing elements where row index equals column index
    }

    cout << "The sum of the diagonal elements is: " << diagonalSum << endl;

    return 0;
}

