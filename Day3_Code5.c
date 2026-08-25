// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float celsius, fahrenheit ;

    printf("Enter the Celsius : ");
    scanf("%f", &celsius);

    fahrenheit =  ( celsius * 9/5) + 32 ;
    
     printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;

}