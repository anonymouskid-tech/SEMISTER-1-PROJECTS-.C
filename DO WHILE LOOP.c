/*
DO WHILE LOOP PROGRAM.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:07/10/24.
*/

#include <stdio.h>
int main()
{
		int i = 0,sum=0,start,stop;
		
		// THE USER TO ENTER HIS/HER VALUES OF CHOICE.
	printf("enter the no to start:");
	scanf("%d",&start);
	
	printf("enter the no to stop:");
	scanf("%d",&stop);
	

	do{
		printf("%d\n",i);
		i++;
		sum +=i;
	}
	while(i<=stop);
	printf("the sum is: %d",sum);


 return 0;
}