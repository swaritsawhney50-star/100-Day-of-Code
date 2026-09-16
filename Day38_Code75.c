// Q75: Add two matrices.


#include <stdio.h>
int main() {
    int rows1, columns1, rows2, columns2;
    int i, j;

    // Read the number of rows and columns of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    int matrix1[rows1][columns1];

    // Read the elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the number of rows and columns of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    int matrix2[rows2][columns2];

    // Read the elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check whether addition is possible
    if (rows1 != rows2 || columns1 != columns2) {
        printf("Matrix addition is not possible.");
        return 0;
    }

    int sum[rows1][columns1];

    // Add corresponding elements of both matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resultant matrix
    printf("Sum of matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}