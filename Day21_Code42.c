// Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {

   // Declare variables
   int n, i, sum = 0;

   // Take input from the user
   printf("Enter a number: ");
   scanf("%d", &n);

   // Find all proper divisors of the number
   for (i = 1; i < n; i++) {

      // Check if i is a divisor of n
      if (n % i == 0)

         // Add the divisor to the sum
         sum = sum + i;
   }

   // Check whether the sum of proper divisors is equal to the number
   if (sum == n)

      // If equal, the number is a Perfect Number
      printf("Perfect Number");
   else

      // Otherwise, it is not a Perfect Number
      printf("Not a Perfect Number");

    return 0;
}