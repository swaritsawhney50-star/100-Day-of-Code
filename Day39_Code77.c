// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;
    int distinct = 1;

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

    // Check whether diagonal elements are distinct
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {

            // Compare each diagonal element with the remaining ones
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        // Stop checking if duplicate is found
        if (distinct == 0) {
            break;
        }
    }

    // Print the result
    if (distinct == 1) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}