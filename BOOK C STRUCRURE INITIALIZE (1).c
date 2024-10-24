/*
 A PROGRAM OF A C STRUCTURE NAMED BOOK WHERE DETAILS ARE INITIALIZED.
 IT COMPRISES THE FOLLOWING ;TITLE, AUTHOR ,YEAR OF PUBLICATION ,ISBN AND PRICE.
 */

/* 
AUTHOR :MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE;23/10/24.
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
	strcpy(book.title,"Introduction to C programming");
	strcpy(book.author,"John Smith");
	book.publication_year =2022;
	strcpy(book.ISBN,"9780131103627");
	book.price =49.99;
	
	printf("Title :%s \n",book.title);
	printf("Author :%s \n",book.author);
	printf("Year of publication: %d \n",book.publication_year);
	printf("ISBN: %s \n",book.ISBN);
	printf("Price: %.2f \n",book.price);
	
	return 0 ;
}
