#include<stdio.h>
void Menu(){
 printf("\nMenu : \n1.Samosa 20/-\n2.Dosa 30/-\n3.Tea 10/-\n0.Exit\n");
 printf("\nEnter your Choice :");
}
int order(int rate){
    int Plates,d=0;
     printf("Enter the number of Plates :");
     scanf("%i",&Plates);
     d += (rate*Plates);
     printf("Sub-Total = %i/-\n",d);
     return d;
}
int main(){
int Nu=1,Plates;
int Sum=0,Fun,S=0,T=0,D=0;
 printf("Welcome to XYZ Hotel");
while(Nu>0)
{
 Menu();
 scanf("%i",&Nu);
switch(Nu){
case 1 :
     S += order(20);
    break;
case 2 :

     D+=order(30);
    break;
case 3 :
     T+=order(10);
    break;
case 0 :
    Sum=S+T+D;
    printf("Grand-Total = %i/- \n",Sum);
    printf("\nT H A N K  Y O U!");
    return 0;
default:
    printf("Invalid Choice!");
 }
 }
return 0;
}
