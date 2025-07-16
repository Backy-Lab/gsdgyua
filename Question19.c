#include <stdio.h>
int main (){
int a;
printf("Enter the Value of A :");
scanf("%i",&a);
if(a>=18){
printf("Congratulation ,not eligible for casting your vote.",a);}
else{
    printf("Sorry, you are not eligible for casting your vote.");}
return 0;
}
