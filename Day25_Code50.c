//Q50: Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *

#include <stdio.h>
int main() {

    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {

        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = i; j <= 5; j++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}