#include <stdio.>
#include<stdlib.h>

void saveStudent();

int main()
{
   saveStudent;
   return 0 ;
}

void saveStudent()
{
   FILE*fptr;
   int admission_Number;
   char names[300];
   char course_name[50];
   fptr=fopen("Student.txt","w");
   if(fptr==NULL)
   {
       printf("ERROR IN CREATING THE FILE");
       exit(1);
   }
   //Enter student name,admission number and the name of the course.
   
   printf("Enter student's admission_Number:\n");
   scanf("%d",&admission_Number);
   
   printf("Enter student's names:/n");
   fgets( names,sizeof(names),stdin);
   
   printf("Enter the course:\n");
   fgets(course,sizeof(coirse),stdin);
   
   fprintf(fptr,"%d %s %s",admission_Number,names,course);
   //fputs(admission_Number,names,course,fptr);
   
   printf("Student records has been saved successfully");
   
   fclose(fptr);
}
  