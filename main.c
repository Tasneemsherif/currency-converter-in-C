#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice ;
    float amount ;
    float total ;
   printf("        Currency Conversion Program\n");
   printf("1) to convert your EGY to USD      \n");
   printf("2) Exit the Program          \n");
   printf("press 1 or 2              \n");
   scanf("%d",&choice);

   if (choice == 1)
   {
   printf("please enter the number you want to convert in EGY  \n");
   scanf("%f",&amount);
   total = amount * 15.69 ;
   printf ("your amount in USD is:");
   printf ("%f",total) ;
   }

   if (choice ==2)
   {
   printf("thank you:)\n");
    return 0;
   }
}
