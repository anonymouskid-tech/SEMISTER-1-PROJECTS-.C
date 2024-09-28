//A PROGRAM TO CALCULATE THE FINE FOR OVERDUE ON LIBRARY BOOKS.
/*
THE INPUTS ARE ;BOOK ID, DUE DATE, AND RETURN DATE.
AUTHOR: MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:28/09/24.
*/
#include<stdio.h>

int main() {
	
	int book_id, due_date ,return_date, days_overdue;
	float fine_rate, fine_amount;
	
	//input book id.
	printf("enter the book id:");
	scanf("%d",&book_id);
	
	//input due date.
	printf("enter the due date:");
	scanf("%d",&due_date);
	
	//input return date.
	printf("enter the return date:");
	scanf("%d",&return_date);
	
	
	days_overdue=return_date - due_date;
	printf("the days overdue is: %d \n",days_overdue);
	
	fine_rate=days_overdue;
	printf("the fine rate is: %.2f \n",fine_rate);
	
	
	//cheque qualifications
	if(fine_rate <= 7){
		fine_amount=fine_rate * 20;
	}
	else if(fine_rate >=8 && fine_rate <=14){
		fine_amount=fine_rate * 50;
	}
	else if(fine_rate>=15){
		fine_amount=fine_rate * 100;
	}
	
	else{
		fine_amount=0;
		}
	
	
	printf("fine amount is:%.2f \n",fine_amount);
	
	return 0;
}