// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main()
{
    float principal, rate, time, si, ci;
    int n;
    printf("enter the principal amount : ");
    scanf("%f", &principal);
    printf("enter the interest rate : ");
    scanf("%f", &rate) ;
    printf("entre the time preiod in year : ");
    scanf("%f", &time) ;

    // calculating simple interest
    si = (principal * rate * time)/100 ;
    printf("simple interest: %.2f\n", si) ;

    // calculating compound interest
    printf("enter the number of time interest is compounded per year : ");
    scanf("%d", &n) ;
    ci = principal *pow((1+rate/(n*100)),(n*time))-principal;
    printf("compound interest: %.2f\n", ci) ;

    return 0 ;
}