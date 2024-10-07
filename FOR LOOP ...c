/*
 'FOR LOOP' PROGRAM 
 AUTHOR:MUTHEE ANTONY KARIUKI.
 REG NO:CT101/G/23600/24.
 DATE:07/10/24.
 */
#include <stdio.h>
int main() {
	int numbers = 0 ,start, stop, sum =0;
	
	// the user to enter the values of his/her choice;
	printf("enter the no to start:");
	scanf("%d",&start);
	
	printf("enter the no to stop:");
	scanf("%d",&stop);
	
	for(numbers=start;numbers<=stop;numbers++){
		printf("%d \n",numbers);
	}
	// sum of numbers
	sum +=numbers;
	
	printf("the sum is :%d\n",sum);
	
	return 0;
}