//Ac program for reading and writing a file
#include<stdio.h>

int main()
{
    FILE*fptr;
    char text[100];
    //a. writing a file.
    fptr=fopen("student.txt","w");
    fprintf(fptr,"Brian is a good student");
    fclose(fptr);
    
    //b. reading from a file.
    fptr=fopen("student.txt","r");
    fgets(text,100,fptr);
    printf("%s",text);
    
    return 0 ;
}