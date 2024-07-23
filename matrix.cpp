#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int result[rows][columns] = {0};
    cout << "Enter the first matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the second matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < columns; j++) 
		{
            result[i][j] = 0; 
            for (int k = 0; k < columns; k++) 
			{
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "The result of matrix multiplication is:\n";
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < columns; j++)
		{
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

