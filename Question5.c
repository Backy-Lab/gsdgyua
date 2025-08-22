#include<stdio.h>
int main(){
float X;
float Q=3.14;
printf("Enter the Radius of circle :");
scanf("%f",&X);
float p=2*Q*X;
float a=Q*X*X;

printf("\nPerimeter of the circle = %f inches\n",p);
printf("Area of the Circle = %f Square Inches\n",a);
return 0;
}
