// Q74: Find the transpose of a matrix.

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j;

    // Read the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int transpose[columns][rows];

    // Read the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}