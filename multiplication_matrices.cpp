#include <iostream>

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

// Function to multiply two matrices
void multiplyMatrices(int first[MAX_ROWS][MAX_COLS], int second[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols, int commonSize) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < commonSize; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int matrix1[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[MAX_ROWS][MAX_COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[MAX_ROWS][MAX_COLS];

    int rows = 3;
    int commonSize = 3;
    int cols = 3;

    multiplyMatrices(matrix1, matrix2, result, rows, cols, commonSize);

    std::cout << "Matrix 1:\n";
    displayMatrix(matrix1, rows, commonSize);

    std::cout << "\nMatrix 2:\n";
    displayMatrix(matrix2, commonSize, cols);

    std::cout << "\nResultant Matrix (Matrix1 * Matrix2):\n";
    displayMatrix(result, rows, cols);

    return 0;
}
