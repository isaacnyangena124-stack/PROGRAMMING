/*
program to compute discount
amount>=10000,10%discount,
 amount between 5000 and 10000=5%discount 
 below 5000, no discount
 
 */
#include<stdio.h>
int main(){
	float amount,discount,amount_to_pay;
	
	printf("Enter the amount purchased\t");
	scanf("%f",&amount);
	
	if(amount>=15000){
		discount=0.1*amount;
		amount_to_pay=amount-discount;
		printf("Discount = %.2f\t",discount);
		printf("Amount to pay = %2f\t",amount_to_pay);
	}
	else{
		printf("no discount");
	}
	return 0;
}