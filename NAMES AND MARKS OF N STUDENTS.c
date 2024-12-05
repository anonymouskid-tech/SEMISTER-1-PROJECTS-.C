/*
A C PROGRAM TO READ NAMES AND MARKS OF N NUMBER OF STUDENTS ,STORED IN A FILE.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:29/10/24.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,n;
	char name[30];
	int marks;
	FILE *file; 
	
	printf("enter the number of students:");
	scanf("%d",&n);
	
	file=fopen("C:\\Users\\PC\\Desktop\\c .txt .bin\\n  students names marks\\n students.txt","a");
	if(file==NULL){
		printf("error opening file");
		exit(1);
	}
	
	for(i=0;i<=n;i++);{
		printf("Enter the name of the student:");
		scanf("%s",&name);
		
		printf("enter the marks:");
		scanf("%d",&marks);
		
		fprintf(file,"name: %s,marks: %d \n",name,marks);
	}
	fclose(file);
	
	return 0;
	
}