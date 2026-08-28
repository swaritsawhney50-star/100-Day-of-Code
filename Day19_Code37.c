// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {

    int a, b, x, y, hcf, lcm;   

    // Take two numbers as input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Store original values because 'x' and 'y' will change
    x = a;
    y = b;

    // Find HCF (GCD) using Euclid's Algorithm
    while (y != 0) {

        int temp = y;    // Store current value of y

        y = x % y;       // Find remainder

        x = temp;        // Update x with previous y
    }

    // After the loop, x contains the HCF
    hcf = x;

    // Calculate LCM using the formula:
    // LCM = (First Number × Second Number) / HCF
    lcm = (a * b) / hcf;

    // Display the LCM
    printf("LCM = %d", lcm);

    return 0;  
}