// Q53: Write a program to print the following pattern:

#include <stdio.h>
int main() {

    int i, j;

    // Print increasing pattern: 1, 3, 5, 7, 9 stars
    for (i = 1; i <= 9; i += 2) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print decreasing pattern: 7, 5, 3, 1 stars
    for (i = 7; i >= 1; i -= 2) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}