/*
'WHILE LOOP PROJECT' PROJECT.
AUTHOR:MUTHEE ANTONY KARIUKI:
REG NO:CT101/G/23600/24.
DATE: 07/10.24.
*/
// while loop
#include <stdio.h>
int main() {
	int numbers = 0,start,stop,sum=0;
	
	printf("enter the number to start:");
	scanf("%d",&start);
	
	printf("enter the number to stop:");
	scanf("%d",&stop);
	
	while(numbers<=stop){
		printf("%d \n",numbers);
	
	numbers++; }
		
	sum +=numbers;
	
	printf("the sum is: %d \n",sum);
	
	
	return 0;
}
