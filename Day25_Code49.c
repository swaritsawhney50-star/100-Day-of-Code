// Q49: Write a program to print the following pattern:
//5
//45
//345
//2345
//12345

#include <stdio.h>
int main() {

    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {

        // Inner loop to print numbers
        for (j = 6 - i; j <= 5; j++) {

            // Print the value of j
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}