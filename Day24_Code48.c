//Q48: Write a program to print the following pattern:
//1
//12
//123
//1234
//12345

#include <stdio.h>
int main() {

    int i, j;  // Declare loop variables

    // Outer loop controls the number of rows
    for (i = 1; i <= 5; i++) {

        // Inner loop prints numbers from 1 to i
        for (j = 1; j <= i; j++) {

            printf("%d", j);  // Print the value of j
        }

        printf("\n");  // Move to the next line
    }

    return 0;  // End the program successfully
}