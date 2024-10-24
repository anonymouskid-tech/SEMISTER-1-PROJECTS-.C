/*
A PROGRAM OF C STRUCTURE NAMED BOOK WHERE THE USER IS TO INPUT THE DETAILS.
IT COMPRISES THE FOOLLOWING VARIABLES;TITLE,AUTHOR.YEAR OF PUBLICATION ,ISBN AND PRICE.
*/
/*
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:23/10/24.
*/

#include<stdio.h>
#include<strings.h>

struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
}
book;
int main(){
	printf("Enter the book title:");
	scanf("%s",&book.title);
	
	printf("Enter the author:");
	scanf("%s",&book.author);
	
	printf("Enter the year of publication:");
	scanf("%d",&book.publication_year);
	
	printf("Enter ISBN:");
	scanf("%s",&book.ISBN);
	
	printf("Enter the price:");
	scanf("%f",&book.price);
	
	return 0;
}