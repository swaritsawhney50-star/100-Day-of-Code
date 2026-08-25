// Q4 Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius, area, circumfrance ;

    printf("Enter radius : ");
    scanf("%f" , &radius );

    area = 3.14 * radius * radius ;
    circumfrance= 2 * 3.14 * radius ;

    printf ("circufrance = %.2fArea =%.2f", circumfrance, area ) ;
    
    return 0 ;
}