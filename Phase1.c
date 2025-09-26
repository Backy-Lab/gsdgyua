#include<stdio.h>
void Get(){
printf("Enter the number of Plates :");
}
void Menu(){
 printf("\nMenu : \n1.Samosa 20/-\n2.Dosa 30/-\n3.Tea 10/-\n0.Exit\n");
 printf("\nEnter your Choice :");
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
     Get();
     scanf("%i",&Plates);
     S= S + 20*Plates;
     printf("Sub-Total = %i/-\n",S);
     Sum=S+T+D;
    break;
case 2 :
     Get();
     scanf("%i",&Plates);
     D= D + 30*Plates;
     printf("Sub-Total = %i/-\n",D);
     Sum=S+T+D;
    break;
case 3 :
     Get();
     scanf("%i",&Plates);
     T= T+ 10*Plates;
     printf("Sub-Total = %i/-\n",T);
     Sum=S+T+D;
    break;
case 0 :
    printf("Grand-Total = %i/- \n",Sum);
    printf("\nT H A N K  Y O U!");
    return 0;
default:
    printf("Invalid Choice!");
return 0;
 }
 }
return 0;
}
