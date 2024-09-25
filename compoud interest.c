/* 
A PROGRAM TO FIND THE COMPOUND INTEREST.
THE COMPONRNTS ARE PRINCIPAL AMOUNT , TIME AND RATE.
AUTHOR: MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24
DATE:25/09/24.
*/

#include<stdio.h> 
#include<math.h>

int main() {
	float A,p ,r,n,t,CI;
	/* 
	A=final amount including interest.
	p=principal amount.
	r=rate in%.
	n=no of compounding a year.
	t=total no of years.
	*/
	
	// input the principlal amount.
	printf("enter the principle amount:");
	scanf("%f",&p);
	
	//input the rate in %.
	printf("enter the rate(in percentage):");
	scanf("%f",&r);
	r=r/100;
	
	// input number of compounding per year.
	printf("enter the no of compounding per year:");
	scanf("%f",&n);
	
	// input total number of years
	printf("enter the number of years:");
	scanf("%f",&t);
	
	// calculate the final amount.
	A=p * pow((1+r/n),(n*t));
	
	// calculate the compound interest.
	CI=A-p;
	
	// output: compound interest.
	printf("tne compound interest is =: %.2f",CI);
	return 0;
}