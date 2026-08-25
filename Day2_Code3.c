// Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    float length, width, perimeter, area ;

    printf("Enter the length : ") ;
    scanf("%f", &length) ;

    printf("Enter the width : ") ;
    scanf("%f", &width) ;

    area = length * width ;
    perimeter = 2*(length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0 ;
}