#include<stdio.h>
#include"stdlib.h"
int main(){
int V,H=100,F=50,T=20,t=10,f=5,i=2,o=1;
printf("Enter Amount: ");
scanf("%d",&V);
int z,x,c,v,b,n,m;
z=V/H;
x=(V%H)/F;
c=((V%H)%F)/T;
v=(((V%H)%F)%T)/t;
b=((((V%H)%F)%T)%t)/f;
n=(((((V%H)%F)%T)%t)%f);
m=(((((V%H)%F)%T)%t)%f);
printf("There are:\n%i Note(s)of 100.00\n%i Note(s)of 50.00\n%i Note(s)of 20.00\n%i Note(s)of 10.00\n%i Note(s)of 5.00\n%i Note(s)of 2.00\n%i Note(s)of 1.00",z,x,c,v,b,n,m);
return 0;
}
