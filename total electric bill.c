//A C program meant to calculate total Electric Bill.
#include<stdio.h>
int total(int units)
{
    int bill;
    if(units<=100)
    bill=units*10;
    else if(units<=200)
    bill= (100*10)+((units-100)*15);
    else
    bill=(100*10)+(100*15)+((units-200)*20);
    return bill;
}
int main()
{
    int units,bill;
    printf("Enter the units Consumed:");
    scanf("%d",& units);
 bill=total(units);   
    printf("The bill=%d",bill);
    
    return 0 ;
}
