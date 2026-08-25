// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main() {
    double num1, num2 ,num3 ;

    printf("enter three numbers : ") ;
    scanf("%lf %lf %lf", &num1, &num2, &num3) ;

        if (num1 >= num2 && num1 >= num3) {
        printf("Largest number is: %.2lf\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Largest number is: %.2lf\n", num2);
    } 
    else {
        printf("Largest number is: %.2lf\n", num3);
    }

    return 0;
}