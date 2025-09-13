#include<stdio.h>
int fact (int b){
if(b==0)
return 1;
else
return fact(b-1)*b;
}

int main(){
int a,b;
printf("Enter the Number : ");
scanf("%i",&a);
b=fact(a);
printf("Factorial of %i = %i",a,b);
}
