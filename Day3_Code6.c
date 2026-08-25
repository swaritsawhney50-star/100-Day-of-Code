// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a=10, b=20, temp;

    temp = a ;
    a = b ;
    b = temp ;

    printf("a = %d , b = %d\n",a,b);

    return 0 ;

}