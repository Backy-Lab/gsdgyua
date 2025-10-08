#include<stdio.h>
#include"stdlib.h"
int main(){
int V,H=100,F=50,T=20,t=10,f=5,i=2,o=1;
printf("Enter Amount: ");
scanf("%d",&V);
int z,x,c,v,b,n,m;
z=V/H//100
x=(V%H)/F;//50
c=((V%H)%F)/T;//20
v=(((V%H)%F)%T)/t;//10
b=((((V%H)%F)%T)%t)/f;//5
n=(((((V%H)%F)%T)%t)%f);//2
m=(((((V%H)%F)%T)%t)%f);//1
printf("There are:\n%i Note(s)of 100.00\n%i Note(s)of 50.00\n%i Note(s)of 20.00\n%i Note(s)of 10.00\n%i Note(s)of 5.00\n%i Note(s)of 2.00\n%i Note(s)of 1.00",z,x,c,v,b,n,m);
return 0;
}
