// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {

    int n, digit, sum = 0;   

    // Take a number as input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop until all digits are processed
    while (n != 0) {

        digit = n % 10;      // Extract the last digit

        sum = sum + digit;   // Add the digit to the sum

        n = n / 10;          // Remove the last digit
    }

    // Display the sum of all digits
    printf("Sum of digits = %d", sum);

    return 0;   
}