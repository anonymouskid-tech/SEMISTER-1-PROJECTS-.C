/*
A PROGRAM TO CALCULATE THE ELECTRICITY BILL OF A GIVEN CUSTOMER  BASED ON THE UNIT CONSUMED.
AUTHOR:MUTHEE ANTONY KARIUKI
REG NO:CT101/G/23600/24.
DATE;6/10/24.
*/

#include <stdio.h>
int main() {

	int customerId,unitsConsumed , totalAmountToPay;
	char customerName[20];
	float chargePerUnit;
	
	//THE USER IS TO ENTER THE FOLLOWING;
	printf("enter your Id;");
	scanf("%d",&customerId);
	
	printf("enter your name;");
	scanf("%s",&customerName);
	
	printf("enter units consumed;");
	scanf("%d",&unitsConsumed);
	
	//CHECKING THE CONDITIONS;
	if(unitsConsumed<=199){
		chargePerUnit=1.20;}
    else if(unitsConsumed>=200 && unitsConsumed<400){
			chargePerUnit=1.50;}
	else if(unitsConsumed>=400 && unitsConsumed<600){
				chargePerUnit=1.80;}
	else if(unitsConsumed>=600){
					chargePerUnit=2.00;}
	else{chargePerUnit=0;}
		printf("charge per unit;%.2f \n ",chargePerUnit);
		
		// CALCULATE THE TOTAL AMOUNT TO PAY AND ADDING ANOTHER CONDITIONS;
	totalAmountToPay=unitsConsumed * chargePerUnit;
	printf("total amount to pay = %d \n",totalAmountToPay);
	
	if(totalAmountToPay>400){
		totalAmountToPay=totalAmountToPay + (totalAmountToPay *0.15);
	
	}
	else if(totalAmountToPay<100){
		totalAmountToPay=100;
	}
	
	return 0;
						
						
	}

