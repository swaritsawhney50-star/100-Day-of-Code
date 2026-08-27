// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() 
{

    int a, b, remainder;

    // Take two numbers as input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Apply Euclid's Algorithm to find the HCF
    while (b != 0) {

        // Find the remainder when a is divided by b
        remainder = a % b;

        // Update a with the value of b
        a = b;

        // Update b with the remainder
        b = remainder;
    }

    // When b becomes 0, a contains the HCF
    printf("HCF = %d", a);

    return 0;
}