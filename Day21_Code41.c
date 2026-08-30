// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {

   // Declare variables
   int n, first, last, digits = 1;
   int middle, result;

   // Take input from the user
   printf("Enter a number: ");
   scanf("%d", &n);

   // Find the last digit of the number
   last = n % 10;

   // Keep dividing the number by 10
   // until only the first digit remains
   while (n >= 10) {
      n = n / 10;
      digits = digits * 10;   // Keeps track of place value (not used here)
   }

   // Store the first digit
   first = n;

   // Initialize the variable (currently not used)
   middle = (n * 0);

   // Display the first digit
   printf("First digit = %d\n", first);

   // Display the last digit
   printf("Last digit = %d\n", last);

   return 0;   
}
