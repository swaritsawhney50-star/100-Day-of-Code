// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;
    int sum = 0;

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    // Read the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is square
    if (rows != columns) {
        printf("Matrix must be square.");
        return 0;
    }

    // Calculate the sum of main diagonal elements
    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    // Print the sum
    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}