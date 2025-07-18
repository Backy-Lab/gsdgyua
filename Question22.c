#include <stdio.h>
int main (){
int a;
printf("Enter the Value of A :");
scanf("%i",&a);
if(a>0){
printf("%i is positive number",a);}
else if(a==0){
    printf("%i is not positive or negative integer",a);}
else{
    printf("%i is negative integer",a);
}
return 0;
}
