// Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j;
    int symmetric = 1;

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
        symmetric = 0;
    }
    else {
        // Check whether matrix[i][j] is equal to matrix[j][i]
        for (i = 0; i < rows; i++) {
            for (j = 0; j < columns; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            // Stop checking if matrix is not symmetric
            if (symmetric == 0) {
                break;
            }
        }
    }

    // Print the result
    if (symmetric == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}