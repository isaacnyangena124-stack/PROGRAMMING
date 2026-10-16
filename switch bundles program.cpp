//A program that displays data bundle menu and allows the user to select a data bundle
#include <stdio.h>
int main()
{
    int choice;
    printf("DATA BUNDLE MENU\n");
    printf("1.  100MB @Ksh.10 \n");
    printf("2. 500MB @Ksh.50 \n");
    printf("3. 1GB @Ksh. 100 \n");
    printf("4. 2GB @Ksh 200 \n");
    
    printf("Enter your Choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1 :
        printf("You have successfully purchased 100MB @Ksh10 valid 3hrs");
        break;
        
        case 2:
        printf("You have successfully purchased 500MB @Ksh.50 valid 24 hrs ");
        break;
        
        case 3:
        printf("Yoi have successfully purchased 1GB @Ksh. 100 valid 24hrs");
        break;
        
        case 4 : 
        printf("You have successfully purchased 2GB @Ksh. 200 valid 24 hrs");
        break;
        
        default:
        printf("Invalid choice");
    }
    return 0 ;
}
