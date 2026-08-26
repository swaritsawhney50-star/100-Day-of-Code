// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() {

    int n, original, digit, sum = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store the original number for comparison later
    original = n;

    // Find the sum of the cubes of all digits
    while (n != 0) {

        // Extract the last digit
        digit = n % 10;

        // Add the cube of the digit to the sum
        sum = sum + digit * digit * digit;

        // Remove the last digit from the number
        n = n / 10;
    }

    // Check whether the sum of cubes is equal to the original number
    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    // End of the program
    return 0;
}