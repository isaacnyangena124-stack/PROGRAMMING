//A C program to calculate totalfare
#include<stdio.h>
float calculateFare(float distance)
{
   float total; 
    total=distance*50;
    return total;
}
int main()
{
    float distance,fare;
    float total;
    printf("Enter the distance covered:");
    scanf("%f",& distance);
    fare=calculateFare(distance);
    
    printf("The totalfare=%.2f\n",fare);
    
    return 0;
}
