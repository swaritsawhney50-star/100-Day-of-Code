// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {

    int n, digit;
    int product = 1;   // Stores the product of odd digits

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop until all digits are processed
    while (n != 0) {

        // Extract the last digit
        digit = n % 10;

        // Check if the digit is odd
        if (digit % 2 != 0)

            // Multiply the odd digit with the product
            product = product * digit;

        // Remove the last digit
        n = n / 10;
    }

    // Display the product of all odd digits
    printf("Product of odd digits = %d", product);

    return 0;  
}
