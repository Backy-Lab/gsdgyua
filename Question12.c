#include<stdio.h>
#include<stdlib.h>
int main (){

float C,F;
printf("Enter the Temperature(in Centigrade): ");
scanf("%f",&C);
F=(C*9/5)+32;
printf("%f degrees Fahrenheit",F);
return 0;
}
