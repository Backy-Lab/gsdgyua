#include <stdio.h>
int main (){
int a,b,c,t;
printf("Enter the Value of A,B and C :");
scanf("%i:%i:%i",&a,&b,&c);
t=a+b+c;
if(t>=180){
    printf("The candidate is eligible for admission.");
}
else{
printf("The candidate is not eligible for admission.");}
return 0;
}
