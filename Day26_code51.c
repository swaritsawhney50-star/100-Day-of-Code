// Q51: Write a program to print the following pattern:

#include <stdio.h>
int main() {

    int i, j;  // Declare loop variables

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {

        // Print spaces before numbers
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print numbers in each row
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;  // End of program
}