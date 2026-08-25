// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
 
int main() {
   int n, i, odd, sum = 0;
 
   printf("Enter n: ");
   scanf("%d", &n);
 
   for (i = 1; i <= n; i++) {
       odd = 2 * i - 1;
       sum = sum + odd;
   }
 
   printf("Sum = %d", sum);
 
   return 0;
}