// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main() {

   int n, original, digit;     // n = input number, original = copy of original number, digit = current digit
   int fact, i, sum = 0;       // fact = factorial of a digit, i = loop counter, sum = sum of factorials

   // Take input from the user
   printf("Enter a number: ");
   scanf("%d", &n);

   // Store the original number for comparison later
   original = n;

   // Process each digit of the number
   while (n != 0) {

      // Extract the last digit
      digit = n % 10;

      // Initialize factorial as 1
      fact = 1;

      // Calculate factorial of the extracted digit
      for (i = 1; i <= digit; i++) {
         fact = fact * i;
      }

      // Add the factorial of the digit to the sum
      sum = sum + fact;

      // Remove the last digit from the number
      n = n / 10;
   }

   // Check if the sum of factorials is equal to the original number
   if (sum == original)
      printf("Strong Number");
   else
      printf("Not a Strong Number");

   return 0;   
}