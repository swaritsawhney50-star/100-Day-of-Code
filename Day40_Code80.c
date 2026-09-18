// Q80: Multiply two matrices.

#include <stdio.h>
int main() {
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    // Read rows and columns of the first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    int matrix1[rows1][columns1];

    // Read elements of the first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read rows and columns of the second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    int matrix2[rows2][columns2];

    // Read elements of the second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check whether matrix multiplication is possible
    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int result[rows1][columns2];

    // Initialize all elements of result matrix to 0
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            for (k = 0; k < columns1; k++) {
                result[i][j] = result[i][j]
                             + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("Resultant matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
