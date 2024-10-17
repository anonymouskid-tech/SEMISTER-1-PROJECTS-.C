// ELECTRICITY BILL CALCULATOR WITH FUNCTIONS
/*
AUTHOR:MUTHEE ANTONY KARIUKI
REG NO:CT101/G/23600/24
DATE:13/10/24
*/
#include <stdio.h>
#include <string.h>

int multiplication(int units_consumed,float charge_per_unit);
int sum(float total_amount_to_pay,float surcharge);

int main() {
	int customer_id, units_consumed;
	char customer_name[30];
	float charge_per_unit,total_amount_to_pay,surcharge;
	
	printf("enter your Id:");
	scanf("%d",&customer_id);
	
	printf("enter your name:");
	scanf("%c ",&customer_name);
	
	printf("enter the units consumed:");
	scanf("%d,&units_consumed");
	
	if(units_consumed<=199){
		charge_per_unit =1.20;
	}
	else if(units_consumed >= 200 && units_consumed<400){
		charge_per_unit =1.50;
	}
	else if(units_consumed>=400 && units_consumed<600){
		charge_per_unit=1.80;
	}
	else if(units_consumed>=600){
		charge_per_unit= 2.00;
	}
	else{charge_per_unit =0;}
	
	
	
total_amount_to_pay=units_consumed * charge_per_unit;

if(total_amount_to_pay>400){
	total_amount_to_pay=total_amount_to_pay + surcharge;
}
	surcharge=total_amount_to_pay * 0.15;
	
	if(total_amount_to_pay<100){
		total_amount_to_pay=100;
	}
	
	printf("charge per unit: %.2f \n",charge_per_unit);
	printf("total amount to pay: %.2f \n",total_amount_to_pay);
	
	return 0;
}


int multiplication(int units_consumed,float charge_per_unit){
	int results;
	results=units_consumed * charge_per_unit;
	return results;
}

int sum(float total_amount_to_pay,float surcharge){
	int results;
	results=total_amount_to_pay + surcharge;
	return results;
}

