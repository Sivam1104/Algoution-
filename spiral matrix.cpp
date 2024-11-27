#include <iostream>
using namespace std;

void printSpiral(int matrix[100][100], int rows, int cols) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;


    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; 
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;         }
    }
}

int main() {
    int rows, cols;
    int matrix[100][100];
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix in spiral order: ";
    printSpiral(matrix, rows, cols);
    cout << endl;

    return 0;
}

