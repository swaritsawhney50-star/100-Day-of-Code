// Q35: Write a program to print all factors of a given number.

#include <stdio.h>
int main() 
{
    int num, i;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the factors of the number
    printf("Factors of %d are: ", num);

    // Loop from 1 to the given number
    for (i = 1; i <= num; i++) {

        // Check if i is a factor of num
        if (num % i == 0) {
            printf("%d ", i);   // Print the factor
        }
    }

    return 0;   
}