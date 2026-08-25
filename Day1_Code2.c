// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int num1, num2 , sum, diff, prod, quot;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    printf("Sum = %d\n Difference = %d\n Product = %d\n Quotient = %d", sum, diff, prod, quot);
    return 0;
}