#include<stdio.h>
#include<stdlib.h>
int main (){

float H,W,P;
printf("Enter the Height of the Rectangle: ");
scanf("%f",&H);
printf("Enter the Width of the Rectangle: ");
scanf("%f",&W);
P=2*(H+W);
printf("Perimeter of the Rectangle = %f",P);
return 0;
}
