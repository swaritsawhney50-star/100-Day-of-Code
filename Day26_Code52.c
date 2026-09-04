// Q52: Write a program to print the following pattern:


#include <stdio.h>
int main() {

    int i, j;

    // Increasing pattern: 1, 3, 5 stars
    for (i = 1; i <= 5; i += 2) {

        for (j = 1; j <= i; j++) {
            printf("*\n");
        }

        printf("\n");  // Blank line after each group
    }

    // Decreasing pattern: 3, 1 stars
    for (i = 3; i >= 1; i -= 2) {

        for (j = 1; j <= i; j++) {
            printf("*\n");
        }

        printf("\n");  // Blank line after each group
    }

    return 0;
}