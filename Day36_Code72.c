// Q72: Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j, sum = 0;

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

    // Calculate the sum of all matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum = sum + matrix[i][j];
        }
    }

    // Print the sum
    printf("Sum of all elements = %d", sum);

    return 0;
}