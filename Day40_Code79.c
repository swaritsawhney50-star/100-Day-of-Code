// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int rows, columns;
    int i, j, d;

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

    // Perform diagonal traversal
    printf("Diagonal traversal: ");

    for (d = 0; d < rows + columns - 1; d++) {

        // Find starting row for each diagonal
        if (d < columns) {
            i = 0;
            j = d;
        } else {
            i = d - columns + 1;
            j = columns - 1;
        }

        // Print elements of the current diagonal
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}