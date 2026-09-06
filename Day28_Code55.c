// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i, j, count;

    // Input the value of n
    printf("enter a number: ");
    scanf("%d", &n);

    // Check numbers from 2 to n
    for (i = 2; i <= n; i++) {
        count = 0;

        // Check the factors of i
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        // Prime number has exactly 2 factors
        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
