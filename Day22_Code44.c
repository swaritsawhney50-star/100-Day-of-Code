// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {

   int n, i;          // n = number of terms, i = loop counter
   float sum = 0;     // Variable to store the sum of the series

   // Take the number of terms as input
   printf("Enter number of terms: ");
   scanf("%d", &n);

   // Loop to calculate the sum of the series
   for (i = 1; i <= n; i++) {

       // Add the current term: (2i - 1) / (2i)
       // Series: 1/2 + 3/4 + 5/6 + 7/8 + ...
       sum = sum + (float)(2 * i - 1) / (2 * i);

   }

   // Display the sum up to 2 decimal places
   printf("Sum = %.2f", sum);

   return 0;   
}