/*
a program to calculate the fine for overdue library books
Upto to 7 days,the charges is ksh.20
8-14 days, the charges is is ksh.50
15 days and more, the charges is ksh.100
*/

#include<stdio.h>

int main()
{
 float bookid,finerate,fineamount,duedate,returndate,daysoverdue;
printf("Enter the book id:\t");
scanf("%f",&bookid);

printf("Enter the duedate:\t");
scanf("%f",&duedate);

printf("Enter the returndate:\t");
scanf("%F",&returndate);
daysoverdue=returndate-duedate;
if(daysoverdue<=7)
{
	fineamount=20;
}	
	else if(daysoverdue<=14)
{
			fineamount=50;
}
			else
{				
		fineamount=100;
}
printf("daysoverdue=%f|n",daysoverdue);
printf("fineamount ksh:%f\n",fineamount);
	return 0;
}