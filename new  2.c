//variable and daata types
//proccesor directive- scanf(),printf()
#include<stdio.h>
int main() {
   //decralation and initialisation
    char a ='h';
    char name[] ={"anto"}; //%s
    int age= 21;
    float salary= 200.45;
    double budget= 20000;
    
    printf(" the character is %c", a);
    printf("\n my name is %s", name);
    printf("\n my age  %d",age);
    printf("\n  my salaly is % f", salary);
    printf("\n my budget is %lf", budget);
    
    return 0;
}