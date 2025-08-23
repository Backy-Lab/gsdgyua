#include<stdio.h>
int main (){
float K,L,C;
printf("Enter the Distance in KM :");
scanf("%f",&K);
printf("Enter the liters :");
scanf("%f",&L);
C=K/L;
printf("Average consumtion (Km/lt) %.2f",C);
return 0;

}
