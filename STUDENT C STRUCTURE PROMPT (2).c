/*
C STRUCTURE OF BOOK AND THE USER IS TO INPUT THE DETAILS.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG:CT101/G/23600/24.
DATE 22/10/24.
*/




#include <stdio.h>
#include<string.h>//strcp
struct student{
	char name[30];
	float height;
	char reg_no[20];
	char email[20];
	int phone;
}
//variables
student1,student2;
int main(){
	

    printf("Enter your name:");
    scanf("%s",student1.name);

	printf("Enter your height:");
	scanf("%f \n",&student1.height);
	
	printf("Enter your REG NO:");
	scanf("%s",&student1.reg_no);
	
	printf("Enter phone no:");
	scanf("%d",&student1.phone);
	
	printf("Enter your email:");
	scanf("%s",&student1.email);
	

	
	return 0;	
}