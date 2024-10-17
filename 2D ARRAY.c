/*
22 ARRAY
AUTHOR:MUTHEE ANTONY KARIUKI
REG NO:CT/101/G/23600/24
DATE:12/10/24
*/
#include <stdio.h>
int main(){
	int i,j;
	//i=rows
	//j=columns
	
	int marks[2][3]={ {23,45,23},{23,56,23} };
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("marks[%d][%d] = %d \n",i,j,marks[i][j]);
	}
	}
	return 0;
	
}