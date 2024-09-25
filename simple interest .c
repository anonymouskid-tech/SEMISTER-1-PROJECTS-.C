/* A PROGRAM TO FIND SIMPLE INTEREST.
COMPONENTS ARE PRINCIPLE AMOUNT,TIME AND RATE(%).
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE: 23/9/24.
*/
#include<stdio.h> 

int main() {

	double principal ,rate, time ,simple_interest;
	
	
	
	// input: principlal amount
	printf("enter the principal amount: ");
	scanf("%lf",&principal);
	printf(")
	
	// input : the rate of interest
	printf("enter the rate of interet (in percentage):");
	scanf("%lf", &rate);
	
	// input: time in years
	printf("enter the time period (in years):");
	scanf("%lf",&time);
	
	simple_interest= (principal * time * rate )/100;
		
	// output: simple interest
	printf("the simple interest is: %.2lf \n",simple_interest);
	
	return 0;
	
}
