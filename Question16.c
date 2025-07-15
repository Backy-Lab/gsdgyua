#include<stdio.h>
#include<stdlib.h>
int main (){
int a,b,A,S,M,Q;
float D;
printf("Enter the First Name: ");
scanf("%i,%i",&a,&b);
A=a+b;
printf("\nthe sum of the given numbers :%i",A);
S=a-b;
printf("\nthe Difference of the given numbers :%i",S);
M=a*b;
printf("\nthe Mutiplication of the given numbers :%i",M);
D=a/b;
printf("\nthe Division of the given numbers :%f",D);
Q=a%b;
printf("\nthe Quotient of the given numbers :%i",Q);
return 0;
}
