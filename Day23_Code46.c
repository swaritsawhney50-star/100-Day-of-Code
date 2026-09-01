// Q46: Write a program to print the following pattern:

#include <stdio.h>
int main() {

    // Declare loop variables
    int i, j;

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++) {

        // Inner loop prints 5 stars in each row
        for (j = 1; j <= 5; j++) {

            // Print one star
            printf("*");
        }

        // Move to the next line after printing one row
        printf("\n");
    }

    // End of program
    return 0;
}