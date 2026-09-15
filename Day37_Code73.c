// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j;

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int rowSum[rows];

    // Read the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (j = 0; j < columns; j++) {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of each row: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}