/*
3D ARRAY
AUTHOR:MUTHEE ANTONY KARIUKI
REG NO:CT101/G/23600/24
DATE:12/10/24
*/

#include <stdio.h>

int main() {
	int i,j,k;
	//i=number of matrixs
	//j=rows
	//k=collumns
	
	int marks[2][2][3]= { {{23,45,67},{68,90,45}},
	{{29,56,78},{23,67,34}} };
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("marks[%d][%d][%d] = %d \n",i,j,k,marks[i][j][k]);
			}
		}
	}
		return 0;
	
	}