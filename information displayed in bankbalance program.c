// a programme to display the information entered.
#include <stdio.h>
int main()
{
    float height;
    double bankbalance;
    char phonenumber [30];
    
    printf("Enter your height in metres");
    scanf("%f",& height);
    
    printf("Enter your bankbalance in kenya shillings");
    scanf("%lf",&bankbalance);
    
    printf("Enter your phonenumber");
    scanf("%29s",& phonenumber);
    
    //display the information entered by the user
    printf("/n.....Your details....\n");
    printf("Your height = %f \n",height);
    printf("Your bankbalance = %.2lf \n", bankbalance);
    printf("Your phonenumber = %s \n",phonenumber);
    
    return 0 ;
    }
    