// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {

    long long binary, digit;
    long long result = 0;   // Stores the 1's complement of the binary number
    long long place = 1;    // Keeps track of the digit position

    // Ask the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Process each binary digit
    while (binary != 0) {

        // Extract the last digit
        digit = binary % 10;

        // Find the 1's complement
        if (digit == 0)
            result = result + 1 * place;   // Change 0 to 1
        else
            result = result + 0 * place;   // Change 1 to 0

        // Move to the next digit position
        place = place * 10;

        // Remove the last digit from the binary number
        binary = binary / 10;
    }

    // Display the 1's complement
    printf("1's Complement = %lld", result);

    return 0;   
}