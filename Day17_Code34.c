// Q34: Write a program to check if a number is prime.

#include <stdio.h>
int main() {

    int n, i, flag = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is less than or equal to 1
    // Such numbers are not prime
    if (n <= 1) {
        printf("Not a Prime Number");
        return 0;
    }

    // Check divisibility from 2 to n/2
    for (i = 2; i <= n / 2; i++) {

        // If n is divisible by i, it is not a prime number
        if (n % i == 0) {
            flag = 1;   // Set flag to indicate the number is not prime
            break;      // Exit the loop
        }
    }

    // Display the result
    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    // End of the program
    return 0;
}