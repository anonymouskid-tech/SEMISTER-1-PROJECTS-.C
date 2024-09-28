// A PROGRAM TO DETERMINE WHEATHER A CUSTOMER WILL BE GIVEN A LOAN I A BANK.
/*
THE INPUTS ARE ;AGE AND ANNUAL INCOME.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:27/09/24.
*/

#include<stdio.h>
int main() {
	float age,annual_income;
	
	//input age
	printf("enter the age:");
	scanf("%f",&age);
	
	// input annual income
	printf("enter the annual income:");
	scanf("%f",&annual_income);
	
	// check qualifications.
	if(age >=21 && annual_income >= 2100) {
		printf("congratulations you qualify for a loan");
	}
    else {
		printf("unfortunately we are unable to offer you a loan at this time");
	}
	
		
		return 0;
}