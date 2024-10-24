/*
C STRUCTURES OF BOOK WHICH DETAILS HAVE BEEN INITIALIZED.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:22/10/24.
*/

#include <stdio.h>
#include<string.h>//strcp
struct students{
	char name[30];
	float height;
	char reg_no[23];
	char email[20];
	int phone;
}
//variables
student1,student2;
int main(){
	//struct student1,studnt2
strcpy(student1.name,"anto"); 
	student1.height =122;
	strcpy(student1.reg_no,"ctjjj");
	student1.height=12;
	student1.phone=2223;
	strcpy(student1.email,"anony@mous");
	
	printf("name: %s \n",student1.name);
	printf("heght: %f \n",student1.height);
	printf("reg no: %s \n",student1.reg_no);
	printf("email: %s\n",student1.email);
	printf("phone no %d \n",student1.phone);
	
	return 0;	
}