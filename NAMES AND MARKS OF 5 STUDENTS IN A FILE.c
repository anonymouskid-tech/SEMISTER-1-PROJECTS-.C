/*
A C PROGRAM TO READ AND NAME AND MARKS OF 5 STUDENTS AND STORING THEM IN A FILE.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:28/10/24.
*/
#include <stdio.h>
#include<stdlib.h>

#define max_no 5 //showing its an array of 5 students.
int main(){
	int i;
	char names[max_no][30];
	int marks[max_no];
	
	FILE *file;
	file=fopen("C:\\Users\\PC\\Desktop\\c .txt .bin\\marks names\\name,marks .txt","w");
	if(file == NULL){
		printf("error opening the file");
		exit(1);
	}
	for(i=0;i<max_no; ++i){
		printf("enter the name of student:");
		scanf("%s",&names[i]);
		
		
		printf("enter the marks:");
		scanf("%d",&marks[i]);
		
		fprintf(file,"name: %s,marks: %d \n",names[i],marks[i]);
	}
		fclose(file);
		
		return 0;

		
		
	
}