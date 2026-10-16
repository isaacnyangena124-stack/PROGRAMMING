//variable an Data types

#include<stdio.h>

int main(){ 

	   //declare and initalize variables
	    char grade = 'A'; //%c
	    char name[15] = "John"; //string, %s
	    int age =15; //%d
	    float pi =3.142; //%f
	    double budget =100024; //%1f
	    
	    //prompt the user
	    printf("Enter your grade \t");
	    scanf("%c" ,&grade);
	    
	    printf("Enter your magnificent name \t");
	    scanf("%s" ,&name);
	    
	    printf("Enter your age \t");
	    scanf("%d" ,&age);
	    
	    printf("Enter the value of pi \t");
	    scanf("%f" ,&pi);
	    
	    printf("Enter your budget \t");
	    scanf("%1f" ,&budget);
	    
	    printf("The grade is %c \n" ,grade);
	    printf ("My  is %s \n" ,name);
	    printf("Iam %d years old \n" , age);
	    printf("The value of pi is %f \n" ,pi);
	    printf("My semester budget is %1f \n" ,budget);
	    
	    

		
		return 0;
		
 }