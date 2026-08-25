// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c ;
    float discriminant, root1, root2 ;
    float realpart, imaginarypart ;

    printf("enter cofficients a, b and c : ") ;
    scanf("%f %f %f", &a, &b, &c) ;

    if (a == 0) {
        printf("it is not a quadratic equation. \n") ;
        return 0 ;
    }
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }

    else {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex (imaginary).\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imaginarypart);
    }
    return 0;
}