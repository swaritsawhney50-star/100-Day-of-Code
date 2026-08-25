// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
 
int main()
{
   float cp, sp, profit, loss;
 
   printf("Enter cost price: ");
   scanf("%f", &cp);
 
   printf("Enter selling price: ");
   scanf("%f", &sp);
 
   if (sp > cp)
   {
       profit = sp - cp;
       printf("Profit = %.2f\n", profit);
       printf("Profit percentage = %.2f%%", (profit / cp) * 100);
   }
   else if (cp > sp)
   {
       loss = cp - sp;
       printf("Loss = %.2f\n", loss);
       printf("Loss percentage = %.2f%%", (loss / cp) * 100);
   }
   else
   {
       printf("No profit, no loss");
   }
 
   return 0;
}