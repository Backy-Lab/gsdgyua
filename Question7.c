#include<stdio.h>
int main (){
float id;
float A,H=8,S;
printf("Enter the Employees ID :");
scanf("%f",&id);
printf("\nEnter the Amount is getting per/Hr : ");
scanf("%f",&A);

S=H*A;
printf("\nEmployees ID= %.0f \n",id);
       printf("Salary=%.2f",S);
return 0;
}
