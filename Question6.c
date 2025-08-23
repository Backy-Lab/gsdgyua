#include<stdio.h>
int main (){
int X, y=365,w=7,d=1,M,M1,M2;
printf("Enter the Days to convert into Years,Weeks and Days :");
scanf("%d",&X);
M=X/365;
M1=(X%365)/7;
M2=((X%365)%7)/1;
printf("Years:%d\nWeeks:%d \nDays:%d",M,M1,M2);
return 0;
}
