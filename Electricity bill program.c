//A program meant to calculate Electricity bill
#include<stdio.h>
int main()
{
    float units,bill;
    printf("Enter the units consumed:");
    scanf("%f",& units);
     if(units<=100)
     {
         bill=units * 10;
     }
     else if(units<=200)
     {
         bill=units * 15;
     }
     else
     {
         bill=units * 20;
     }
     printf("bill=%.2f",bill);
     return 0 ;
}
